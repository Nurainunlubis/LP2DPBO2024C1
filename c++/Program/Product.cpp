/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
    private:
    string idProduct; 
    string name;
    string brand;
    string price;

    public:
    Product(){        
    }

    Product(string idProduct, string name, string brand, string price)
    {
        this->idProduct = idProduct;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    // Getter and Setter for Product
    string getIdProduct()
    {
        return idProduct;
    }

    void setIdProduct(string idProduct)
    {
        this->idProduct = idProduct;
    }

    // Getter and Setter for name
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name =  name;
    }

    // Getter and Setter for Brand
    string getBrand()
    {
        return brand;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    // Getter and Setter for Price
    string getPrice()
    {
        return price;
    }

    void setPrice(string price)
    {
        this->price = price;
    }

    ~Product() {}
};