int Enable34 = 11; 

int input3 = 12; 

int input4 = 13; 

int input2 = 8; 

int input1 = 9;

int Enable12 = 10;


void setup() {

pinMode(Enable34, OUTPUT);

pinMode(input3, OUTPUT);

pinMode(input4, OUTPUT);

pinMode(input2, OUTPUT);

pinMode(input1, OUTPUT);

pinMode(Enable12, OUTPUT);

}

void loop() {

digitalWrite(Enable34, HIGH); 

digitalWrite(input3, HIGH);

digitalWrite(input4, LOW); 

digitalWrite(input2, HIGH); 

digitalWrite(input1, LOW); 

digitalWrite(Enable12, HIGH); 

}