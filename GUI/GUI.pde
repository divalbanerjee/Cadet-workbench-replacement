import processing.serial.*;

Serial myPort;  // Create object from Serial class

void setup(){
  background(20,30,40);
  size(1280,720);
  int lstLength = Serial.list().length;
  String portName = Serial.list()[lstLength-1];
  myPort = new Serial(this, portName, 9600);
  frameRate(60);
  smooth(8);
}
