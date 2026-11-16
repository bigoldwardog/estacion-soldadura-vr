# Rendimiento en Meta Quest

## Mediciones en el visor

**Estado:** pendiente de prueba. Comparar ambos APK en el mismo visor, con el mismo recorrido y la misma frecuencia de refresco. Usar `fb86708` como versión anterior al batching.

| Momento del recorrido | FPS antes | FPS después | Qué se optimizó |
| :--- | :---: | :---: | :--- |
| Escena inicial | — | — | — |
| Con todos los objetos visibles | — | — | — |
| Durante la interacción / soldadura | — | — | — |
| **Peor momento** | — | — | — |

## Comprobación en Unity

| Métrica (Game → Stats) | Antes | Después |
| :--- | ---: | ---: |
| Triángulos visibles | 724 | 724 |
| Draw Calls | 45 | 61 |
| Set Pass Calls | 19 | 19 |

El encuadre probado quedó por debajo del límite de **200.000 triángulos**. Estas capturas no demuestran una mejora de rendimiento en el visor.

## Ajustes realizados

- **Iluminación estática:** se horneó la iluminación de la estación con una luz direccional en modo Mixed. Este ajuste ya está en `fb86708`.
- **Batching Static:** se activó en las piezas fijas de la estación en `c91bedf`.
