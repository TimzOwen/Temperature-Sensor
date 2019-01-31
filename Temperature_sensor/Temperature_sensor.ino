//temperature sensor 
//by code ninja Owen

void setup() {
         Serial.begin(9600); // opens the USB Port for communication

       }

void loop() {
            float temp = 0;

            temp = (5.0 * analogRead(0) * 100.0)/1024; // equation to convert analog reading to actual temperature

            Serial.println(temp);// display temp on the serial monitor;

             }
