/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//import library and file
#include <bits/stdc++.h>
#include "Product.cpp"

class Clothing : public Product
{
    private:
    string size;
    string material;
    string gender;

    public:
    //constructor
    Clothing()
    {
    
    }

    Clothing(string size, string material, string gender){
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    //Getters and Setters for size
    string getSize()
    {
        return this->size;
    }

    void setSize(string size){
        this->size = size;
    }

    //Getter and Setter for Material
    string getMaterial(){
        return this->material;
    }

    void setMaterial(string material){
        this->material = material;
    }

    //Getters and Setters for gender
    string getGender()
    {
        return this->gender;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    // destructor
    ~Clothing() {}
};

