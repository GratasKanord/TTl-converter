#include <HardwareSerial.h>

HardwareSerial myserial(2);

void setup() {
  myserial.begin(9600, SERIAL_8N1, 16, 17);

}

void loop() {
  myserial.print("L");
}
