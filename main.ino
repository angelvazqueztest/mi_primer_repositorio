int sumar(int a, int b){
    return a+b;
}

void setup(){
    Serial.begin(9600);
    Serial.println("Hola mundo");
}

void loop(){
    Serial.println(sumar(1,2)); // 3
}