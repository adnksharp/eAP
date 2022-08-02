# Access Point with nodeMCU ESP8266

```
Iniciando...

Red:            Node Brigde
Password:       n5ij_2ZrvRIji;@B
IP:             192.168.4.1

Servidor iniciado
```

[![AP.png](https://i.postimg.cc/d0LhBwQk/AP.png)](https://postimg.cc/yJC66qZs)

Crear un punto de acceso WiFi usando un nodeMCU ESP8266 en Arduino.

## Librerias
- [ESP8266WiFi](https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/readme.html)
- WiFiClient
- ESP8266WebServer

## Funcionamiento
Usando la función ```WiFi.softAP``` se crea un punto de acceso WiFi con Strings de configuración para el SSID y contraseña. 
La función ```WiFi.softAPIP``` configura la IP del punto de acceso. 
Y la libreria ```ESP8266WebServer``` se usa para crear un servidor web que se conecta a la función ```WiFi.softAPIP```.
