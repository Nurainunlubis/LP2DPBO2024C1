/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//import library and file
#include <bits/stdc++.h>
#include "Clothing.cpp"

using namespace std;


class Shirt : public Clothing
{
    private:
    string color;
    string sleeve_type;

    public:
    Shirt()
    {

    }

    Shirt(string color, string sleeve_type)
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    //Getter and setter for color
    string getColor()
    {
        return this->color;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    string getSleeve_type()
    {
        return this->sleeve_type;
    }

    void setSleeve_type(string sleeve_type)
    {
        this->sleeve_type = sleeve_type;
    }



    ~Shirt() {}
};