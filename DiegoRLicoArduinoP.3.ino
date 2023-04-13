/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Diego Rodolfo Revolorio Lico 
   2019046
  Sección: A
  
*/

// Definir pines de entrada para los botones
#define BUTTON1_PIN 2
#define BUTTON2_PIN 3

//Definir los pines de salidas del LED RGB
#define LED_R_PIN 4
#define LED_G_PIN 5
#define LED_B_PIN 6

void setup() {
// Configuración de pines de entrada de los botones
pinMode(BUTTON1_PIN, INPUT_PULLUP);
pinMode(BUTTON2_PIN, INPUT_PULLUP);

// Configuración de pines de salida del LED RGB
pinMode(LED_R_PIN, OUTPUT);
pinMode(LED_G_PIN, OUTPUT);
pinMode(LED_B_PIN, OUTPUT);
}

void loop() {
// Leer estados de los botones
int BUTTON1_state = digitalRead(BUTTON1_PIN);
int BUTTON2_state = digitalRead(BUTTON2_PIN);

// Combinaciones de colores de LED
if(BUTTON1_state == LOW && BUTTON2_state == HIGH) {

// Combinación RB (rojo y azul)
  digitalWrite(LED_R_PIN, HIGH);
  digitalWrite(LED_G_PIN, LOW);
  digitalWrite(LED_B_PIN, HIGH);
    delay(500); // Mostrar por 500 milisegundos
  digitalWrite(LED_R_PIN, LOW);
  digitalWrite(LED_G_PIN, LOW);
  digitalWrite(LED_B_PIN, LOW);
} else if (BUTTON1_state == LOW) {
  
// Combinación RG (rojo y verde)
  digitalWrite(LED_R_PIN, HIGH);
  digitalWrite(LED_G_PIN, HIGH);
  digitalWrite(LED_B_PIN, LOW);
} else if (BUTTON2_state == LOW) {
  
// Combinación GB (verde y azul)
  digitalWrite(LED_R_PIN, LOW);
  digitalWrite(LED_G_PIN, HIGH);
  digitalWrite(LED_B_PIN, HIGH);
} else {
  
// Secuencia de colores por defecto (rojo, verde, azul)
  digitalWrite(LED_R_PIN, HIGH);
  digitalWrite(LED_G_PIN, LOW);
  digitalWrite(LED_B_PIN, LOW);
    delay(500); // Mostrar rojo por 500ms
  digitalWrite(LED_R_PIN, LOW);
  digitalWrite(LED_G_PIN, HIGH);
  digitalWrite(LED_B_PIN, LOW);
    delay(500); // Mostrar verde por 500ms
  digitalWrite(LED_R_PIN, LOW);
  digitalWrite(LED_G_PIN, LOW);
  digitalWrite(LED_B_PIN, HIGH);
  delay(500); // Mostrar azul por 500ms
  }
}
