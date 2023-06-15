https://youtu.be/35Lgkbq5MA8

Projekat je realizovan uz pomoć senzora za temperaturu lm75 i NTC termistora povezanih
na arduino uno R3. Korišćena je biblioteka lm75-master koja je priložena.
Pošto nije bilo moguće pisati u fajl pomoću samog arduina, za to je korišćena python skripta
sa dozvolom pisanja u tekstualni fajl. Tu se takođe vidi tačno vreme izmerene temperature.
Za računanje temperature pomoću otpornika korišćena je Steinhart-Hart jednačina gdje je izvršena
kalibracija potrebnih parametara.

Koriscena je biblioteka se nalazi na datom linku https://github.com/jlz3008/lm75 .
Insrukcije za njeno dodavanje su proste, skinuta je kao zip file. 
Kada udjemo u Arduino i idemo na opcije Sketch u gornjem levom cosku.
Klikom na Sketch otvara nam se padajuci meni u kojem biranom opciju Include Libary.
Nakog toga dodajemo nasu skinuti zipovanu datoteku, koju smo prethodno ubacili u folder sa anrduino fajlom.
 