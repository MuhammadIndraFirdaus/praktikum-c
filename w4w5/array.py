# Membuat list kosong
angka = []

# Input 10 angka
for i in range(10):
    nilai = int(input("Masukkan angka ke-" + str(i+1) + ": "))
    angka.append(nilai)

# Mencari nilai terbesar
terbesar = angka[0]
for i in range(1, 10):
    if angka[i] > terbesar:
        terbesar = angka[i]

# Output
print("Nilai terbesar adalah:", terbesar)