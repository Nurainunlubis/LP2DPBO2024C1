#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

#class declaration
class Product:
    __idProduct = ""
    __name = ""
    __brand = ""
    __price = ""

    #constructor
    def __init__(self, idProduct="", name="", brand="", price=""):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price

    # Getter and setter idProduct
    def getidProduct(self):
        return self.__idProduct
    def setidProduct(self, idProduct):
        self.__idProduct = idProduct

    # Getter and Setter name
    def getName(self):
        return self.__name
    def setName(self, name):
        self.__name = name

    # Getter and Setter Brand
    def getBrand(Self):
        return Self.__brand
    def setBrand(self, brand):
        self.__brand = brand

    # Getter and Settter Price
    def getPrice(self):
        return self.__price
    def setPrice(self, price):
        self.__price = price
        
