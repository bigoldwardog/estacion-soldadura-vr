using UnityEngine;
using TMPro;

public class WeldZone : MonoBehaviour
{
    [Header("Configuración")]
    [SerializeField] private float weldTime = 5f;

    [Header("Colores")]
    [SerializeField] private Color idleColor = Color.red;
    [SerializeField] private Color weldingColor = Color.yellow;
    [SerializeField] private Color weldedColor = Color.green;

    private float currentWeldTime = 0f;
    private bool isWelded = false;

    private Renderer zoneRenderer;
    private TMP_Text weldingStatusText;

    private void Start()
    {
        zoneRenderer = GetComponent<Renderer>();

        // Buscar el texto de estado de la estación por el nombre del objeto.
        GameObject textObject = GameObject.Find("WeldingStatusText");

        if (textObject != null)
        {
            weldingStatusText = textObject.GetComponent<TMP_Text>();
        }

        if (zoneRenderer != null)
        {
            zoneRenderer.material.color = idleColor;
        }

        if (weldingStatusText != null)
        {
            weldingStatusText.text = "LISTO PARA SOLDAR";
        }
        else
        {
            Debug.LogWarning("No se encontró el TextMeshPro de la estación.");
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (isWelded)
            return;

        if (IsWeldingTool(other))
        {
            currentWeldTime = 0f;

            zoneRenderer.material.color = weldingColor;

            if (weldingStatusText != null)
            {
                weldingStatusText.text = "SOLDADURA EN PROGRESO\n0 / 5";
            }
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (isWelded)
            return;

        if (IsWeldingTool(other))
        {
            currentWeldTime += Time.deltaTime;

            int progress = Mathf.FloorToInt(currentWeldTime);
            progress = Mathf.Clamp(progress, 0, 5);

            if (weldingStatusText != null)
            {
                weldingStatusText.text =
                    "SOLDADURA EN PROGRESO\n" +
                    progress +
                    " / 5";
            }

            if (currentWeldTime >= weldTime)
            {
                CompleteWeld();
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (isWelded)
            return;

        if (IsWeldingTool(other))
        {
            currentWeldTime = 0f;

            zoneRenderer.material.color = idleColor;

            if (weldingStatusText != null)
            {
                weldingStatusText.text = "LISTO PARA SOLDAR";
            }
        }
    }

    private bool IsWeldingTool(Collider other)
    {
        if (other.CompareTag("WeldingTool"))
            return true;

        Transform current = other.transform.parent;

        while (current != null)
        {
            if (current.CompareTag("WeldingTool"))
                return true;

            current = current.parent;
        }

        return false;
    }

    private void CompleteWeld()
    {
        isWelded = true;

        zoneRenderer.material.color = weldedColor;

        if (weldingStatusText != null)
        {
            weldingStatusText.text = "SOLDADURA COMPLETADA";
        }
    }
}