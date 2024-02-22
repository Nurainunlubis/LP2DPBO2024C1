<?php
/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */
class Product
{
    // Declaration variables
    private $idProduct;
    private $name;
    private $brand;
    private $price;

    public function __construct($idProduct="", $name="", $brand="", $price="0")
    {
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // Getter and Setter for Product
    public function get_IdProduct()
    {
        return $this->idProduct;
    }

    public function set_IdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    // Getter and Setter for Name
    public function get_Name()
    {
        return $this->name;
    }

    public function set_Name($name)
    {
        $this->name = $name;
    }

    // Getter and Setter for Brand
    public function get_Brand()
    {
        return $this->brand;
    }

    public function set_Brand($brand)
    {
        $this->brand = $brand;
    }

    //Getter and Setter for Price
    public function get_Price()
    {
        return $this->price;
    }
    
    public function set_Price($price)
    {
        $this->price = $price;
    }
}
?>