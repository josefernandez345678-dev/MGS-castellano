# Metal Gear Solid — PAL Español Recompiled (BETA)

**BETA — Port independiente de Metal Gear Solid PAL español (SLES-01734) para Windows, con siete trucos integrados.**

Este proyecto adapta la edición española de PlayStation 1 mediante recompilación, utilizando el framework PSXRecomp y el launcher recomp-ui. No está afiliado a Konami ni a los desarrolladores de los proyectos utilizados como base.

## Características

- Edición PAL española: **SLES-01734**.
- Launcher utilizado en la compilación local para seleccionar BIOS y archivos del juego.
- Siete trucos integrados y seleccionables:
  - Vida infinita
  - Munición infinita
  - Explosivos infinitos
  - Objetos infinitos
  - Invisibilidad
  - Sin alertas
  - Oxígeno infinito
- Desarrollo gratuito y sin finalidad comercial.

## Requisitos

| Componente | Requisito |
| --- | --- |
| Juego | **Metal Gear Solid PAL español** |
| Disco 1 | **SLES-01734** |
| Disco 2 | **SLES-11734** |
| BIOS de referencia | **SCPH-5552.BIN**, PlayStation 1 europea (PAL) |
| Tamaño de la BIOS de referencia | **524.288 bytes (512 KiB)** |
| Formato utilizado en las pruebas | **CUE/BIN**, manteniendo cada CUE vinculado a su BIN |
| Sistema | Windows |

La BIOS **SCPH-5552.BIN** es la utilizada durante las pruebas de configuración del launcher. Esta referencia no confirma por sí sola que todas las versiones de BIOS funcionen con el motor recompilado; la compatibilidad de otras revisiones no se ha verificado.

### Verificación de discos e instalación

El launcher castellano en desarrollo dispone de un asistente que permite seleccionar BIOS, Disco 1 y Disco 2. Comprueba los identificadores requeridos (**SLES-01734** y **SLES-11734**) y la presencia de una cabecera ISO 9660 reconocible, sin exigir una coincidencia exacta de hashes SHA-1 o SHA-256.

**Pruebas realizadas en el equipo de desarrollo:**

- Se seleccionó como Disco 1 una edición francesa con identificador **SLES-01506**: el launcher la **rechazó**, mostrando el serial detectado, la región PAL, el resultado de la cabecera y una explicación de qué versión necesita el usuario.
- Al seleccionar los **dos discos españoles correctos** en CUE/BIN, la instalación **guardó las rutas** y pasó automáticamente a la pantalla **JUGAR**.
- La lectura de cabecera y serial sirve para identificar la edición, **no garantiza la integridad completa** de la imagen. Actualmente el serial se busca en los primeros 16 MiB.

**Formatos:** CUE/BIN es el formato utilizado en estas pruebas. El verificador contiene una detección preliminar de cabeceras ISO 9660 para ciertas imágenes ISO, pero **todavía no se ha confirmado que el motor recompilado pueda ejecutarlas**. Por tanto, ISO **no se anuncia como formato de juego probado** ni se recomienda en las instrucciones de instalación.

**Objetivo de uso final:** que el usuario pueda abrir el launcher, seleccionar su propia BIOS y sus discos españoles CUE/BIN, y pulsar **JUGAR**, sin compilar manualmente. La preparación y validación de ese flujo completo para otros equipos sigue pendiente.

## Estado de publicación

**Estado: BETA (desarrollo y pruebas).** El juego y los siete trucos se han probado en el equipo de desarrollo, pero la distribución pública para Windows todavía no está disponible ni validada en otros equipos.

**En desarrollo: la descarga jugable y su instalador todavía no están disponibles.**

El port y los siete trucos funcionan en el equipo de desarrollo. La distribución reproducible para terceros, incluido el launcher con el proceso de generación local, aún debe prepararse y probarse.

No confundir el código de los trucos publicado aquí con una versión jugable completa.

## Uso de archivos originales

El usuario debe aportar legítimamente sus propios archivos de los discos y de la BIOS. **Este repositorio no proporciona BIOS, imágenes de discos, archivos comerciales del juego ni código del juego recompilado.**

## Proyectos que nos han servido de base y referencia

Este port español se ha desarrollado apoyándonos especialmente en el trabajo previo de **dos proyectos independientes**. Queremos reconocerlos expresamente:

1. **[Metal Gear Solid Recompiled](https://github.com/alexbeavs-ps1-ports/metal-gear-solid-recomp)** — punto de partida y referencia para el port y su flujo de recompilación. Su edición objetivo original no es la PAL española SLES-01734; nuestra adaptación se centra en esa versión.
2. **[Metal Gear Solid RE:INTEGRAL](https://github.com/Drommedhar/mgs-reintegral)** — proyecto de referencia del que hemos aprendido y aprovechado ideas para nuestro desarrollo, respetando la autoría y las licencias de sus componentes.

**Gracias a sus desarrolladores por compartir su trabajo.** MGS-castellano es un proyecto independiente; no es una versión oficial de ninguno de los dos, ni implica su respaldo.

## Desarrollo y asistencia de IA

**Proyecto impulsado por su creador, con asistencia técnica de ChatGPT (OpenAI)** en el análisis, la adaptación de código, la resolución de problemas de compilación, la integración de trucos y la documentación. ChatGPT es una herramienta de inteligencia artificial, no una cuenta de GitHub ni un colaborador humano. Esta mención reconoce su participación sin implicar que OpenAI patrocine o avale el proyecto.

## Créditos y licencias

- [PSXRecomp](https://github.com/mstan/psxrecomp) — framework de recompilación; licencia PolyForm Noncommercial 1.0.0.
- [recomp-ui](https://github.com/mstan/recomp-ui) — interfaz y launcher; licencia MIT.
- [Metal Gear Solid Recompiled](https://github.com/alexbeavs-ps1-ports/metal-gear-solid-recomp) — proyecto utilizado como referencia/base; permisos de redistribución de su código por confirmar.
- [RE:INTEGRAL](https://github.com/Drommedhar/mgs-reintegral) — referencia y créditos a las contribuciones originales cubiertas por sus respectivas licencias.

Las licencias de cada dependencia se aplican a sus propias partes. La disponibilidad pública del código no implica permiso general para redistribuir contenido del juego.

Metal Gear Solid y las marcas y materiales originales pertenecen a sus respectivos titulares.
