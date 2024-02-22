/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya
 maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//import library and file
#include <bits/stdc++.h>
#include "Shirt.cpp"

using namespace std;

int main(int argc, char const* argv[]) {
    vector<Shirt> myShirt;
    int n;
    string idProduct;
    string name;
    string brand;
    string price;
    string size;
    string material;
    string gender;
    string color;
    string sleeve_type;

    cout << "Masukan Jumlah Data Yang Akan Di Input : ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        Shirt temp;
        cout << "\nInput data ke - " << i + 1;
        cout << "\nID: ";
        cin >> idProduct;
        cout << "Name: ";
        cin >> name;
        cout << "Brand: ";
        cin >> brand;
        cout << "Price: ";
        cin >> price;
        cout << "Size: ";
        cin >> size;
        cout << "Material: ";
        cin >> material;
        cout << "Gender : ";
        cin >> gender;
        cout << "Color: ";
        cin >> color;
        cout << "Sleeve Type: ";
        cin >> sleeve_type;

        temp.setIdProduct(idProduct);
        temp.setName(name);
        temp.setBrand(brand);
        temp.setPrice(price);
        temp.setSize(size);
        temp.setMaterial(material);
        temp.setGender(gender);
        temp.setColor(color);
        temp.setSleeve_type(sleeve_type);

        myShirt.push_back(temp);
    }

    // Menampilkan data shirt yang sudah diinput
    cout << "\nData shirt yang sudah diinput:" << endl;

    // Menghitung lebar maksimum untuk setiap kolom
    int maxIdProductWidth = 2; // Minimal 2 karakter untuk "ID"
    int maxNameWidth = 4; // Minimal 4 karakter untuk "Name"
    int maxBrandWidth = 5; // Minimal 5 karakter untuk "Brand"
    int maxPriceWidth = 5; // Minimal 5 karakter untuk "Price"
    int maxSizeWidth = 4; // Minimal 4 karakter untuk "Size"
    int maxMaterialWidth = 8; // Minimal 8 karakter untuk "Material"
    int maxGenderWidth = 6; // Minimal 6 karakter untuk "Gender"
    int maxColorWidth = 5; // Minimal 5 karakter untuk "Color"
    int maxSleeveTypeWidth = 10; // Minimal 10 karakter untuk "Sleeve Type"

    for (int i = 0; i < myShirt.size(); i++) {
        maxIdProductWidth = max(maxIdProductWidth, (int)myShirt[i].getIdProduct().length());
        maxNameWidth = max(maxNameWidth, (int)myShirt[i].getName().length());
        maxBrandWidth = max(maxBrandWidth, (int)myShirt[i].getBrand().length());
        maxPriceWidth = max(maxPriceWidth, (int)myShirt[i].getPrice().length());
        maxSizeWidth = max(maxSizeWidth, (int)myShirt[i].getSize().length());
        maxMaterialWidth = max(maxMaterialWidth, (int)myShirt[i].getMaterial().length());
        maxGenderWidth = max(maxGenderWidth, (int)myShirt[i].getGender().length());
        maxColorWidth = max(maxColorWidth, (int)myShirt[i].getColor().length());
        maxSleeveTypeWidth = max(maxSleeveTypeWidth, (int)myShirt[i].getSleeve_type().length());
    }

    // Mencetak baris header
    cout << setw(maxIdProductWidth + 2) << "ID";
    cout << setw(maxNameWidth + 2) << "Name";
    cout << setw(maxBrandWidth + 2) << "Brand";
    cout << setw(maxPriceWidth + 2) << "Price";
    cout << setw(maxSizeWidth + 2) << "Size";
    cout << setw(maxMaterialWidth + 2) << "Material";
    cout << setw(maxGenderWidth + 2) << "Gender";
    cout << setw(maxColorWidth + 2) << "Color";
    cout << setw(maxSleeveTypeWidth + 2) << "Sleeve Type" << endl;

    // Mencetak garis pemisah
    cout << string(maxIdProductWidth + maxNameWidth + maxBrandWidth + maxPriceWidth + maxSizeWidth + maxMaterialWidth + maxGenderWidth + maxColorWidth + maxSleeveTypeWidth + 18, '-') << endl;

    // Mencetak data shirt
    for (int i = 0; i < myShirt.size(); i++) {
        cout << setw(maxIdProductWidth + 2) << myShirt[i].getIdProduct();
        cout << setw(maxNameWidth + 2) << myShirt[i].getName();
        cout << setw(maxBrandWidth + 2) << myShirt[i].getBrand();
        cout << setw(maxPriceWidth + 2) << myShirt[i].getPrice();
        cout << setw(maxSizeWidth + 2) << myShirt[i].getSize();
        cout << setw(maxMaterialWidth + 2) << myShirt[i].getMaterial();
        cout << setw(maxGenderWidth + 2) << myShirt[i].getGender();
        cout << setw(maxColorWidth + 2) << myShirt[i].getColor();
        cout << setw(maxSleeveTypeWidth + 2) << myShirt[i].getSleeve_type() << endl;
    }
    // Mencetak garis pemisah
    cout << string(maxIdProductWidth + maxNameWidth + maxBrandWidth + maxPriceWidth + maxSizeWidth + maxMaterialWidth + maxGenderWidth + maxColorWidth + maxSleeveTypeWidth + 18, '-') << endl;

    return 0;
}