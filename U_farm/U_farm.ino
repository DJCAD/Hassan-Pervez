//photoresistor A Style Tech.

int Pr1 = 1; // will be used for analog 1, connected to first LDR and box 1 (vegetables)

int Pr2 = 2;  // will be used for analog 2, connected to second LDR and box 2 (fruit)

int PrValue1 = 0; // value of output

int PrValue2 = 0;

int Pr_High = 20; // value of when box is empty and light is high

int Pr_Low = 2; // value of when box is not empty and light is low

void setup() {

Serial.begin(9600); //start serial Monitor

pinMode(8, OUTPUT); // pin 8 as output for green LED

pinMode(7, OUTPUT); // pin 7 as output for red LED
}

void loop() {

PrValue1 = analogRead(Pr1); //get LDR1 value

PrValue2 = analogRead(Pr2); //get LDR2 value

Serial.println(PrValue1); //prints LDR1 value to cross check

delay(100); // value updated every 0.1 second.

if ((PrValue1 > Pr_Low) && (PrValue1 < Pr_High))// if sensor value is less than 20, turn LED on to signal box is not empty. if it is less than 2 then button is switched off

{ digitalWrite(8, HIGH);//LED on } else { digitalWrite(8, LOW);}

}

if (PrValue1 >= Pr_High)
{ digitalWrite(8, LOW);//LED off } else {} //turn LED off again if sensor value is over 20 and box is empty

}


if ((PrValue2 > Pr_Low) && (PrValue2 < Pr_High))

{ digitalWrite(7, HIGH); } else { digitalWrite(7, LOW);}


if (PrValue2 >= Pr_High)
{ digitalWrite(7, LOW);//LED off } else {}

}


}
