include<Servo.h>
servo servo;
int const trigPin = 6;
int const echoPin = 5;
configuración vacía ()
{
pinMode(trigPin, SALIDA);
pinMode(echoPin, ENTRADA);
    servo.adjuntar(3);
}
bucle vacío ()
{ int duración, distancia;
escritura digital (pin disparador, ALTO);
retraso (1);
escritura digital (pin disparador, BAJO);
// Medir la entrada de pulso en el pin de eco
duración = pulseIn(echoPin, HIGH);
// La distancia es la mitad de la duración dividida por 29.1 (de la hoja de datos)
distancia = (duración/2) / 29,1;
// si la distancia es inferior a 0,5 metros y superior a 0 (0 o menos significa sobre rango)
si (distancia <= 50 && distancia >= 0) {
	servo.escribir(50);
    retraso (3000);
} demás {
	
	servo.escribir(160);
}
// Esperar 60 ms no dañará a nadie
retraso (60);
}
