#include<math.h>
#include <inttypes.h> 
#include <Wire.h>
#include <lm75.h>

TempI2C_LM75 Temperature = TempI2C_LM75(0x48,TempI2C_LM75::nine_bits);
int i;

double Thermister(int data)
{
  double temp;
  temp=log(10000.0*((1024.0/data-1)));
  temp=1/(0.000969148+(0.000232125+(0.0000000876741*temp*temp))*temp);
  temp=temp-273.15;
  Serial.print("Temperatura preko otpornika: ");
  Serial.print(temp);
  Serial.println(" C");
}

void setup() 
{
  Serial.begin(9600);
  Serial.println("Start");
}


void loop() 
{
  i=analogRead(A0);
  Thermister(i);
  Serial.print("Temperatura preko senzora: ");
  Serial.print(Temperature.getTemp()-6);//Print LM75 Sensor Reading
  Serial.println(" C");
  Serial.println(" ");

  delay(1000);
}
