int button=4;
int led=8;
int x=0;
int led2=12;
int button2=13;
int led4=7;
int led6=2;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
   pinMode(led2,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(button2,INPUT);
  pinMode(led6,OUTPUT);
}

void loop()
{
  if (digitalRead(button)==1){
    x=!x;
    
    digitalWrite(led,x);
     digitalWrite(led2,x);
   
    
    
  }
  if (digitalRead(button2)==1){
    x=!x;
    digitalWrite(led4,x);
    digitalWrite(led6,x);
   
    
}
}
