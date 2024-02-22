<?php
/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

require_once('Product.php');
class Clothing extends Product
{
    private $size;
    private $material;
    private $gender;

    public function __construct($size = "", $material="", $gender="")
    {
        parent::__construct("", "", "", "");
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // Getter and Setter for size
    public function get_Size()
    {
        return $this->size;
    }

    public function set_Size($size)
    {
        $this->size = $size;
    }

    // Getter and Setter for Material
    public function get_Material()
    {
        return $this->material;
    }

    public function set_Material($material)
    {
        $this->material = $material;
    }

    // Getter and Setter for Gender
    public function get_Gender()
    {
        return $this->gender;
    }

    public function set_Gender($gender)
    {
        $this->gender = $gender;
    }
}
?>