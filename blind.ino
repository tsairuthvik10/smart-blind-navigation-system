//  done by T SAI RUTHVIK


int const trigPin = 2;
int const echoPin = 4;
int const led = 8;
void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT); 
}
void loop()
{

int duration, distance;

digitalWrite(trigPin, HIGH);
delay(100);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance <= 100 && distance >= 50) {
//for distance of obstacle between 50cm and 100 cm, led will blink in loop for 0.5 second
analogWrite(led, 100);
delay(500);
analogWrite(led, 0);
} else if (distance <= 50 && distance >= 10){
  //for distance of obstacle between 10cm and 50 cm, led will blink in loop for 0.05 second
analogWrite(led, 255);
delay(50);
analogWrite(led, 0);
} else if (distance <= 10) {
  //for distance of obstacle less than 10 cm, led will glow continuously
  analogWrite(led, 255);
} else {
  analogWrite(led, 0);
  }

delay(60);
}

