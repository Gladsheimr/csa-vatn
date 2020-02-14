#include <PDM.h>

short sampleBuffer[256];

// number of samples read
volatile int samplesRead;


void setup() {
// Open serial communications and wait for port to open:
  // A baud rate of 115200 is used instead of 9600 for a faster data rate
  // on non-native USB ports
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

   
   if (!PDM.begin(1, 16000)) {
    Serial.println("Failed to start PDM!");
    while (1);
  }

}

void onPDMdata() {
  // query the number of bytes available
  int bytesAvailable = PDM.available();

  // read into the sample buffer
  int bytesRead = PDM.read(sampleBuffer, bytesAvailable);

  // 16-bit, 2 bytes per sample
  samplesRead = bytesRead / 2;

  Serial.println("Read PDM");
}

void loop() {

  Serial.println(".");

     
}
