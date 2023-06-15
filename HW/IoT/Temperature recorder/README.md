https://youtu.be/35Lgkbq5MA8

Projekat je realizovan uz pomoć senzora za temperaturu lm75 i NTC termistora povezanih
na arduino uno R3. Korišćena je biblioteka lm75-master koja je priložena.
Pošto nije bilo moguće pisati u fajl pomoću samog arduina, za to je korišćena python skripta
sa dozvolom pisanja u tekstualni fajl. Tu se takođe vidi tačno vreme izmerene temperature.
Za računanje temperature pomoću otpornika korišćena je Steinhart-Hart jednačina gdje je izvršena
kalibracija potrebnih parametara.