<?php
/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

require_once "Clothing.php";

class Shirt extends Clothing
{
    // declaration 
    private $color;
    private $sleeve_type;

    public function __construct()
    {

    }

    // Getter and Setter Color
    public function get_Color(): string
    {
        return $this->color;
    }

    public function set_Color($color)
    {
        $this->color = $color;
    }

    //Getter and Setter Sleeve Type
    public function get_Sleeve_Type(): string
    {
        return $this->sleeve_type;
    }

    public function set_Sleeve_Type($type)
    {
        $this->sleeve_type = $type;
    }
}