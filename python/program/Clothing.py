#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

from Product import Product


class Clothing(Product):
    __size = ""
    __material = ""
    __gender = ""

    #constructor
    def __init__(self, size="", material="", gender=""):
        self.__size = size
        self.__material = material
        self.__gender = gender

    # Getter and Setter size
    def getSize(self):
        return self.__size
    def setSize(self, size):
        self.__size = size

    # Getter and Setter material
    def getMaterial(self):
        return self.__material
    def setMaterial(self, material):
        self.__material = material

    # Getter and Setter gender
    def getGender(self):
        return self.__gender
    def setGender(self, gender):
        self.__gender = gender