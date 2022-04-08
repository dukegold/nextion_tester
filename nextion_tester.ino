#include "Nextion.h"

bool h;
NexText t_box       = NexText(0,1,"t0");
uint32_t  timer;
void setup() {
  //Initialize the Nextion Display
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  nexInit();
  h = false;
  timer = 0;
}

void loop() {
  if(millis() - timer > 1000){
    timer = millis();
    if(h == true){
      t_box.setText("Hello");
    }
    else{
      t_box.setText("World");
    }
    h = !h;
  }
}
