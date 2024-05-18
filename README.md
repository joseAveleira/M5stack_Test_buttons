# Proyecto M5Stack

Este proyecto está diseñado para trabajar con el dispositivo M5Stack. Utiliza la biblioteca M5Stack para interactuar con el hardware del dispositivo, incluyendo la pantalla LCD y los botones.

## Características

- Interfaz de usuario en la pantalla LCD
- Interacción con los botones del dispositivo
- Vibración del dispositivo como feedback al usuario

## Funcionalidad del Código

El código en `main.cpp` configura la pantalla LCD y define el comportamiento de los botones del dispositivo.

### Configuración de la Pantalla LCD

El código configura la pantalla LCD para usar una fuente de texto de tamaño 2 y establece el color del texto en verde con un fondo negro.

### Comportamiento de los Botones

El código define el comportamiento de los botones A y B del dispositivo. Cuando se suelta el botón A o se mantiene presionado durante un intervalo de tiempo específico, la pantalla LCD se borra y se muestra el mensaje "Boton1 Pulsado". Además, el dispositivo vibra durante 100 milisegundos.

El comportamiento del botón B es similar, pero la acción específica que se realiza cuando se suelta o se mantiene presionado aún no se ha definido en el código proporcionado.

## Cómo Contribuir

Si desea contribuir a este proyecto, por favor haga un fork del repositorio y envíe un pull request con sus cambios.