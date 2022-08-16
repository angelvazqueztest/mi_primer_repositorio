int sumar(int a, int b){
    return a+b;
}

void setup(){
    Serial.begin(9600);
    
}

void loop(){
    Serial.println(sumar(1,2)); // 3
}