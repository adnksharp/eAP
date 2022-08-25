#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char SSID[] = "Node Brigde", PASSW[] = "n5ij_2ZrvRIji;@B";

ESP8266WebServer server(80);

String HTML()
{
	String html = "<!DOCTYPE html>\n";
	html += "<html lang=\"es\">\n";
	html += "<head>\n";
	html += "\t<meta charset=\"UTF-8\">\n";
	html += "\t<title>Inicio</title>\n";
	html += "\t<style>\n";
	html += "\t\tbody {\n";
	html += "\t\t\tbackground-color: #0D1117;\n";
	html += "\t\t\tcolor: #ddd;\n";
	html += "\t\t\tfont-family: Arial, Helvetica, sans-serif;\n";
	html += "\t\t\ttext-align: center;\n";
	html += "\t\t}\n";
	html += "\t</style>\n";
	html += "</head>\n";
	html += "<body>\n";
	html += "\t<h1>Servidor local funcionando</h1>\n";
	html += "\t<p>Conectado</p>\n";
	html += "</body>\n";
	html += "</html>";
	return html;
}

void Hroot()
{
	server.send(200, "text/html", HTML());
}

void setup()
{
	Serial.begin(115200);
	Serial.println("\n\n\nIniciando...\n");

	WiFi.softAP(SSID, PASSW);
	IPAddress wfIP = WiFi.softAPIP();

	Serial.print("Red:\t\t");
	Serial.println(SSID);
	Serial.print("Password:\t");
	Serial.println(PASSW);
	Serial.print("IP:\t\t");
	Serial.println(wfIP);

	server.on("/", Hroot);
	server.begin();

	Serial.println("\nServidor iniciado");
}

void loop()
{
	server.handleClient();
}
