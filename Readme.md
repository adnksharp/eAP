# Access Point with nodeMCU ESP8266

[![AP.png](https://i.postimg.cc/d0LhBwQk/AP.png)](https://postimg.cc/yJC66qZs)

```
Iniciando...

Red:            Node Brigde
Password:       n5ij_2ZrvRIji;@B
IP:             192.168.4.1

Servidor iniciado
```

Crear un punto de acceso WiFi usando un nodeMCU ESP8266 en Arduino.

## Funcionamiento
### Variables
- `SSID`: Nombre de la red WiFi a crear.
- `PASSW`: Contraseña de la red WiFi a crear.
- `server`: Alias del servidor.
- `wfIP`: Dirección IP del servidor.

### Funciones
- `HTML`: Genera el HTML para el punto de acceso.
- `Hroot`: Contenido HTML para la página principal.
- `WiFi.softAP()`: Inicia el punto de acceso WiFi.
- `WiFi.softAPIP()`: Devuelve la dirección IP del punto de acceso.

### Funcionamiento
Usando la librería [ESP8266WiFi](https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html) se crea la red WiFi con la opción `softAP`. La dirección IP del servidor es obtenida con la función `WiFi.softAPIP()`.

Con la libreria ```ESP8266WebServer``` se crea un servidor web:
- `server.on`: Se define una función para cada petición.
    - Usando la función `Hroot` se genera el contenido HTML (función `HTML()`) para la página principal `/`.
- `server.begin`: Inicia el servidor web.

Usando el puerto serial se imprime el estado del microcontrolador:
- Enciende la placa.
- Se crea la red WiFi.
- Se inicia el servidor web.
