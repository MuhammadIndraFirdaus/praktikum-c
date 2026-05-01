# Membuat class (mirip struct di C)
class Mahasiswa:
    def __init__(self, nama, nilai):
        self.nama = nama
        self.nilai = nilai

# Input jumlah mahasiswa
n = int(input("Masukkan jumlah mahasiswa: "))

data = []  # list untuk menyimpan objek
total = 0

# Input data
for i in range(n):
    print(f"\nMahasiswa ke-{i+1}")
    nama = input("Nama  : ")
    nilai = float(input("Nilai : "))
    
    mhs = Mahasiswa(nama, nilai)  # membuat objek
    data.append(mhs)              # simpan ke list
    
    total += nilai

# Hitung rata-rata
rata = total / n

# Output data
print("\nData Mahasiswa:")
for i, mhs in enumerate(data):
    print(f"{i+1}. {mhs.nama} - {mhs.nilai}")

print(f"\nRata-rata nilai: {rata:.2f}")