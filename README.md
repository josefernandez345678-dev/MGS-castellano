# MGS Castellano — Launcher para Metal Gear Solid PAL Español (v0.1.0 experimental)

**Launcher portable de Windows para Metal Gear Solid PAL español (SLES-01734 / SLES-11734), con siete trucos integrados y compatibilidad con mando probada en el equipo de desarrollo.**

Este proyecto adapta la edición española de PlayStation 1 mediante recompilación, utilizando el framework PSXRecomp y el launcher recomp-ui. No está afiliado a Konami ni a los desarrolladores de los proyectos utilizados como base.

## Características

- Edición PAL española: **SLES-01734**.
- Launcher portable para seleccionar BIOS y los dos discos originales, guardar la instalación y pulsar **JUGAR**.
- Compatibilidad con mando y logotipo personalizado comprobados en el equipo de desarrollo.
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

**Flujo comprobado en el equipo de desarrollo:** extraer el paquete, ejecutar `MGS-Castellano-Launcher.exe`, seleccionar la BIOS y los discos españoles CUE/BIN propios, guardar la instalación y pulsar **JUGAR**. Se han comprobado el reconocimiento de mando y los siete trucos. **No se garantiza todavía compatibilidad en todos los equipos Windows.**

## Descarga para Windows

**v0.1.0 — Descarga PORTABLE para Windows x64 (experimental; probada en el equipo de desarrollo).**

**[Descargar ZIP PORTABLE v0.1.0](https://github.com/josefernandez345678-dev/MGS-castellano/releases/tag/v0.1.0)** desde los archivos adjuntos (Assets) de la Release. **No requiere instalador:** basta con extraer el ZIP completo y ejecutar el launcher. La portabilidad en otros equipos y la independencia de rutas externas siguen pendientes de verificación. El botón «Code > Download ZIP» descarga el código del repositorio, **no** el paquete portable jugable.

### Cómo utilizar el ZIP portable

1. Descargar el ZIP adjunto a la Release y extraerlo por completo en una carpeta.
2. Ejecutar `MGS-Castellano-Launcher.exe` desde la carpeta extraída, sin moverlo fuera de ella.
3. Seleccionar **su propia BIOS** de PS1 PAL y las imágenes **CUE/BIN de sus propios discos españoles** (Disco 1: SLES-01734; Disco 2: SLES-11734).
4. Guardar la instalación y abrir **JUGAR**. Los siete trucos se pueden activar desde el launcher.

### Cambio de disco durante la partida

Cuando el juego solicite cambiar de disco, pulsa **F1** para abrir el menú. Dentro del menú, busca la opción de cambio de disco (actualmente aparece **en inglés**) y selecciona el **Disco 2** (SLES-11734) que configuraste previamente. Después, vuelve al juego para continuar la partida.

**Nota:** el menú de F1 todavía está **en inglés**. Su traducción al español está **pendiente**; los nombres de sus opciones pueden aparecer en inglés.

### Continuar una partida guardada en el Disco 2

**Una vez que ya tengas una partida guardada en el Disco 2**, si cierras el launcher y más adelante vuelves a abrirlo, entra en el **selector de discos**, selecciona **Disco 2 (SLES-11734)** y pulsa **PLAY / SIGUIENTE MISIÓN**. Así podrás iniciar el juego desde el segundo disco y cargar tu partida guardada. No selecciones el Disco 1 para reanudar una partida del Disco 2.

No es necesario compilar el launcher manualmente para utilizar el paquete portable. No se proporcionan BIOS, imágenes de discos ni archivos comerciales del juego. El ejecutable abierto del motor recompilado, cuando se distribuya con el paquete, **no sustituye los archivos originales que debe aportar el usuario**.

## Estado de publicación

**Experimental:** el lanzamiento se ha probado en el equipo de desarrollo, incluidas la configuración inicial, el mando, los trucos y el inicio del juego. No se ha confirmado aún el funcionamiento en una variedad de equipos. La versión v0.1.0 se ofrece mediante el ZIP adjunto en **Releases**; debe respetarse la licencia y los permisos de redistribución de cada componente incluido.

## Uso de archivos originales

El usuario debe aportar legítimamente sus propios archivos de los discos y de la BIOS. **Este repositorio no proporciona BIOS, imágenes de discos ni archivos comerciales del juego original.** Los componentes abiertos del motor que puedan distribuirse se distinguen de esos archivos originales y conservan los requisitos de sus licencias.

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
