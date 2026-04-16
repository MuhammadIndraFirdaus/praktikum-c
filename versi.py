def hitung_operasi(baris):
    try:
        angka1, operator, angka2 = baris.split()
        angka1 = float(angka1)
        angka2 = float(angka2)

        if operator == '+':
            return angka1 + angka2
        elif operator == '-':
            return angka1 - angka2
        elif operator == '*':
            return angka1 * angka2
        elif operator == '/':
            return angka1 / angka2
        else:
            return "Operator tidak dikenal"
    except Exception as e:
        return f"Error: {e}"


with open("ops.txt", "r") as file_input, open("results.txt", "w") as file_output:
    for line in file_input:
        line = line.strip()
        if line:  # skip baris kosong
            hasil = hitung_operasi(line)
            file_output.write(f"{line} = {hasil}\n")

print("Perhitungan selesai! Hasil ada di results.txt")