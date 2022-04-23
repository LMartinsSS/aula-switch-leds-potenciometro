#define led1  2
#define led2  3
#define led3  4
#define led4  5
#define led5  6
#define led6  7
#define led7  8
#define led8  9
#define potenciometro A0

int valor;

void setup(){


Serial.begin(9600);  

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(potenciometro, INPUT);
}

 void loop(){
   
   valor = analogRead(potenciometro);
   Serial.println(valor);

   switch(valor){
     
     case 0:
     todosapagados();
     digitalWrite(led1, HIGH);
     break;
     
     case 164:
 	 todosapagados();
     digitalWrite(led2, HIGH);
     break;
     
      case 327:
 	 todosapagados();
     digitalWrite(led3, HIGH);
     break;
     
        case 511:
 	 todosapagados();
     digitalWrite(led4, HIGH);
     break;
     
        case 675:
 	 todosapagados();
     digitalWrite(led5, HIGH);
     break;
     
        case 839:
 	 todosapagados();
     digitalWrite(led6, HIGH);
     break;
     
        case 1023:
 	 todosapagados();
     digitalWrite(led7, HIGH);
     break;
       
     
   }
   }
   void todosapagados(){
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
     digitalWrite(led6, LOW);
     digitalWrite(led7, LOW);
     digitalWrite(led8, LOW);
}
  
