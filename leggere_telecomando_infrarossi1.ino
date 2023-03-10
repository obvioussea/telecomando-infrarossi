#include <IRremote.h>

int receiver = 11;
IRrecv irrecv (receiver);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(9, OUTPUT);
}

void loop(){
  
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}