
String lora_band = "865000000"; //Banda de frecuencia 
String lora_networkid = "18";   //Identificación de la red Lora
String lora_address = "2";      //Dirección de Lora
//String lora_RX_address = "1";   //Dirección del modulo receptor

int led = 21;

String textoEntrada;

void setup()
{

  pinMode(led,OUTPUT);
  Serial2.begin(115200,SERIAL_8N1, 16,17);
  Serial.begin(115200);
   
  
 /*delay(1500);
  Serial2.println("AT+BAND=" + lora_band);
  delay(500);
  Serial2.println("AT+NETWORKID=" + lora_networkid);
  delay(500);
  Serial2.println("AT+ADDRESS=" + lora_address);
  delay(1000);
  */
}

void loop(){ 
  if(Serial2.available()) {
    
    textoEntrada = Serial2.readString();
    Serial.println(textoEntrada);
  
    if(textoEntrada.indexOf("ON") > 0) {
      digitalWrite(led, !digitalRead(led));
    }

    
  }
}
