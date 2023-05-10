#include <cvzone.h>

SerialData serialData(1, 1);
int valsRec[1];

void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  serialData.Get(valsRec);
  if (valsRec[0] == 0){
    //put the stepper code for red color here
  }
  if (valsRec[0] == 1){
    //put the stepper code for green color here
  }
  if (valsRec[0] == 2){
    //put the stepper code for blue color here
  }
  if (valsRec[0] == 3){
    //put the stepper code for yellow color here
  }
  if (valsRec[0] == 4){
    //put the stepper code for white color here
  }


}
