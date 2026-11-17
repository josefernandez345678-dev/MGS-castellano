# Cambios previstos para próximas versiones

> **Hoja de ruta provisional — proyecto experimental.** Estas funciones están previstas o en estudio, pero no se anuncian como disponibles en la versión pública actual. El orden puede cambiar y no hay fechas comprometidas.

## Lanzamiento experimental v0.1.0

- **Comprobado localmente:** paquete portable Windows x64 preparado; launcher iniciado desde carpeta independiente, guardado de instalación, mando, siete trucos e inicio del juego.
- **Comprobado en el paquete:** no se han detectado imágenes de discos, BIOS ni partidas personales con los filtros aplicados; también se buscaron rutas absolutas en archivos de configuración y texto.
- **Pendiente:** publicar el ZIP en Releases tras revisar las licencias y avisos de redistribución de todas las dependencias incluidas.
- **Próximas pruebas:** funcionamiento en otros equipos Windows, distintas rutas e instalaciones desde cero.
- **Ya documentado:** requisitos, instalación, limitaciones conocidas y créditos en el README.

## Configuración de controles — desarrollo pendiente

- Editor de **24 controles PS1** para teclado, con guardado y restauración de asignaciones.
- Editor universal de mandos compatibles con **SDL**, sin limitarlo a un modelo concreto de PlayStation o Xbox.
- Mostrar el **nombre real del mando seleccionado** y utilizar su **GUID** para gestionar perfiles individuales.
- Asignar controles, configurar la zona muerta cuando corresponda, guardar y restaurar perfiles sin alterar los de otros mandos.
- Probar la detección y configuración con diferentes dispositivos y resolver incompatibilidades encontradas.

## Mejoras gráficas — previstas y sujetas a viabilidad técnica

- Estudiar opciones de **resolución de salida** y **escalado de imagen** para diferentes monitores.
- Evaluar ajustes de **pantalla completa**, modo ventana y presentación de imagen.
- Investigar posibles mejoras de **nitidez, filtrado y calidad visual**, respetando la estética original de PlayStation.
- Comprobar la compatibilidad, el rendimiento y la estabilidad de cada mejora antes de anunciarla como disponible.
- No prometer mejoras gráficas que el motor recompilado actual no admita sin modificaciones adicionales.

## Mejoras posteriores en estudio

- Mejoras de accesibilidad, claridad de mensajes de error y experiencia de configuración inicial.
- Más pruebas de compatibilidad en equipos Windows x64 distintos del de desarrollo.
- Revisión de estabilidad, gestión de errores y documentación de incidencias conocidas.

## Estado de publicación

La versión portable ha sido probada en el equipo de desarrollo. **Su disponibilidad pública comenzará únicamente al publicarse el archivo ZIP en Releases**; todavía no se confirma compatibilidad en otros equipos. La configuración avanzada de mandos y teclado no debe considerarse terminada por el hecho de aparecer en esta hoja de ruta.

**No se distribuirán BIOS, imágenes de los discos de Metal Gear Solid ni partidas personales.** Cada usuario deberá aportar legítimamente sus archivos compatibles.

El proyecto es independiente y no está afiliado a Konami.
