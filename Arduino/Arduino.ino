int in_0 = 40;
int in_1 = 41;
int in_2 = 42;
int in_3 = 43;
int in_4 = 44;
int in_5 = 45;
int in_6 = 46;
int in_7 = 47;



void setup() {
  // put your setup code here, to run once:
  pinMode(in_0,INPUT);
  pinMode(in_1,INPUT);
  pinMode(in_2,INPUT);
  pinMode(in_3,INPUT);
  pinMode(in_4,INPUT);
  pinMode(in_5,INPUT);
  pinMode(in_6,INPUT);
  pinMode(in_7,INPUT);
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_0 = digitalRead(in_0);
  int val_1 = digitalRead(in_1);
  int val_2 = digitalRead(in_2);
  int val_3 = digitalRead(in_3);
  int val_4 = digitalRead(in_4);
  int val_5 = digitalRead(in_5);
  int val_6 = digitalRead(in_6);
  int val_7 = digitalRead(in_7);
  
  String output = String(String(val_0)+String(val_1)+String(val_2)+String(val_3)+String(val_4)+String(val_5)+String(val_6)+String(val_7));

  Serial.print(output);
}
