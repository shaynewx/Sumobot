#define trigPin 10
#define echoPin 13


#define IRout 12

#define Left 3
#define Right 4
#define Forward 1
#define Back 0

// Motor A
int enA = 9;
int in1 = 8;
int in2 = 7;

// Motor B
int enB = 3;
int in3 = 5;
int in4 = 4;

void setup() {
    Serial.begin(9600);
    pinMode(IRout, INPUT);

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    pinMode(enA, OUTPUT);
    pinMode(enB, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
}

void set_speed(int motor_left, int motor_right) {
    analogWrite(enA, motor_left);
    analogWrite(enB, motor_right);

}

void move(int motorA_speed, int motorB_speed, int direction) {

    if (direction == Forward) {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }
    if (direction == Back) {
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    if (direction == Left) {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    if (direction == Right) {
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }
    set_speed(motorA_speed, motorB_speed)
}


void stop_bot() {
     set_speed(0, 0)

}



void change_direction(int base_speed,int base_speed2,int direction) {
    move(base_speed, base_speed2, direction);
}

void detect_boundary() {
    float test = digitalRead(IRout);
    if (test == 1.0) {
        stop_bot();
    }
}

void state_stand_by(){

}





void loop() {
    change_direction(150,100,Forward);
    delay(1000);
    change_direction(150,80,Forward);
    delay(1000);
    change_direction(100,100,Left);
    delay(100);
    change_direction(100,80,Forward);
    delay(1000);
}


