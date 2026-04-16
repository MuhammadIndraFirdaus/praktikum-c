import csv

total = 0
count = 0

grades = {"A":0, "B":0, "C":0, "D":0, "E":0}

with open("data.csv") as f:
    reader = csv.reader(f)
    for row in reader:
        nama = row[0]
        nilai = int(row[1])

        total += nilai
        count += 1

        if nilai >= 85:
            grades["A"] += 1
        elif nilai >= 70:
            grades["B"] += 1
        elif nilai >= 55:
            grades["C"] += 1
        elif nilai >= 40:
            grades["D"] += 1
        else:
            grades["E"] += 1

# output
print("Rata-rata:", total / count)
print("Jumlah grade:")
for k, v in grades.items():
    print(k, ":", v)