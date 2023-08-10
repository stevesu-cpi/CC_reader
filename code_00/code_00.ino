

int lc_pin = A1;
int lc_val;
int const_val = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lc_val = analogRead(lc_pin);  //change compression to pos value
  Serial.print("load_cell_val:");
  Serial.print(lc_val);
  Serial.print(",");
  Serial.print(" const_val:");
  Serial.println(const_val);
}
