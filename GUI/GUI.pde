import processing.serial.*;

Serial myPort;  // Create object from Serial class

int myWidth = 1280;
int myHeight = 720;
String data;

void initializeSerial(){
  int lstLength = Serial.list().length;
  String portName = Serial.list()[lstLength-1];
  myPort = new Serial(this, portName, 9600);
  myPort.clear();
  myPort.bufferUntil('\n');
  
}
 
void setup(){
  background(20,30,40);
  size(1280,720);
  frameRate(60);
  smooth(8);
  initializeSerial();
}

void draw(){
  PFont font = createFont("Helvetica", 100, true);
  textFont(font);
  textSize(100);
  textAlign(CENTER);
  data = trim(myPort.readStringUntil('\n'));
  if (data != null) {
    text(data,myWidth/2,myHeight/2);
  }
}
    
    
