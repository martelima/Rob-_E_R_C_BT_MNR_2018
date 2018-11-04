/*
->Autor: Mateus Lima
->Descrição: este é um controle de luminosidade de dois farois independentes,
             efetuados por uma placa arduino uno R3, aqui podemos controlar 
             via protocolo serial ou por um sensor analógicon LDR.
*/

#define SENSOR A0
#define LED_CAM 9 //Farol analogico 
#define LED_F 13  //Farol Serial

int leitura_s=0;  //variavel que armazena os dados do meio Serial

void setup() {
  Serial.begin(9600);
  pinMode(LED_F,OUTPUT);
  pinMode(LED_CAM,OUTPUT);
}

void loop() {
/*
  Aqui obtemos a leitura do sensor analógico 
  e atribuimos a uma variável local denominada
  "leitura"
*/

  int leitura=analogRead(SENSOR);

/*
  Devido ao fato de se utilizar um painel cujo 
  a tensão de funcionamento máximo é de 3 Volts
  limitamos o sinal para que o pulso de PWM não 
  danifique o farol de led
*/
  int valor_convertido=leitura*0.05;
  analogWrite(LED_CAM,valor_convertido);
  
/*
  Aqui verificamos se a comunicação Serial esta
  disponível para captura de dados e atribuimos 
  esses dados a variável 'leitura_s' que será 
  responsavel por acionar ou não um outro painel 
  de led
*/
int leitura_s  
  if (Serial.available() > 0) {
    leitura_s = Serial.read();
    Serial.write(leitura_s);
  }
  if(leitura_s=='F'){analogWrite(LED_F,512);}
  if(leitura_s=='B'){analogWrite(LED_F,0);}
}
