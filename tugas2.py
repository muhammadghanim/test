# Input tinggi dari 3 ayam
ayam1, ayam2, ayam3 = map(int, input().split())

# Menentukan ayam mana yang paling tinggi
if ayam1 > ayam2 and ayam1 > ayam3:
    print(1)
elif ayam2 > ayam1 and ayam2 > ayam3:
    print(2)
else:
    print(3)
