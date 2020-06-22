#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
int a,b,c,d,income;
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
 

void loop()
{
  if(Serial.available()>0)
  {
  	income=Serial.read();
    
    income=income-'0';
    a=income/2;
    b=a/2;
    c=b/2;
    d=c/2;
    digitalWrite(S4,LOW);
      digitalWrite(IN1,HIGH);
    if(d==0)
      digitalWrite(IN1,LOW);
  
       digitalWrite(IN2,HIGH);
    if(c==0)
      digitalWrite(IN2,LOW);

     
      digitalWrite(IN3,HIGH);
    if(b==0)
      digitalWrite(IN3,LOW);

      
      digitalWrite(IN4,HIGH);
    if(a==0)
      digitalWrite(IN4,LOW);
   
      
  digitalWrite(S4,HIGH);
  }
}
