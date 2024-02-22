# #Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# #untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 
class Shirt:
    def __init__(self):
        self.idProduct = ""
        self.name = ""
        self.brand = ""
        self.price = ""
        self.size = ""
        self.material = ""
        self.gender = ""
        self.color = ""
        self.sleeve_type = ""

def main():
    shirt_list = []

    print("Masukkan Jumlah Data Yang akan Di Input : ")
    n = int(input())
    for _ in range(n):
        temp = Shirt()

        print(f"\nInput Data Produk ke-{_ + 1}:")
        temp.idProduct = input("ID : ")
        temp.name = input("Nama : ")
        temp.brand = input("Brand : ")
        temp.price = input("Price : ")
        temp.size = input("Size : ")
        temp.material = input("Material : ")
        temp.gender = input("Gender : ")
        temp.color = input("Color : ")
        temp.sleeve_type = input("Sleeve Type : ")

        shirt_list.append(temp)

    # Tentukan panjang maksimum setiap kolom
    column_lengths = {}
    if shirt_list:
        for attribute, value in vars(shirt_list[0]).items():
            column_lengths[attribute] = max(len(attribute), max(len(str(getattr(shirt, attribute))) for shirt in shirt_list))

        # Cetak header
        header = "| " + "   | ".join(["{:<{}}".format(attr.capitalize(), column_lengths[attr]) for attr in vars(shirt_list[0]).keys()]) + "   |"
        print("-" * (len(header) ))
        print(header)
        print("-" * (len(header) ))

        # Cetak baris data
        for shirt in shirt_list:
            row = "| " + "   | ".join(["{:<{}}".format(str(getattr(shirt, attr)), column_lengths[attr]) for attr in vars(shirt_list[0]).keys()]) + "   |"
            print(row)

        print("-" * (len(header) ))

if __name__ == "__main__":
    main()
