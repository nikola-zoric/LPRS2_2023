import serial
import time

# Otvori serijski priključak
ser = serial.Serial('COM5', 9600)  # Promenite COM5 u odgovarajući serijski priključak
# Ako je potrebno, možda ćete morati da promenite i brzinu prenosa (9600) prema vašim potrebama

# Otvori datoteku za pisanje
file = open("output.txt", "w")

while True:
    # Čitaj podatke sa serijskog porta
    data = ser.readline().decode().strip()

    if data:
        # Generiši timestamp
        timestamp = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime())

        # Formatiraj podatke sa timestampom
        line = f"{timestamp}: {data}"

        # Ispisi primljene podatke na konzolu
        print(line)

        # Snimi liniju u datoteku
        file.write(line + "\n")
        file.flush()

# Zatvori datoteku
file.close()

# Zatvori serijski priključak
ser.close()