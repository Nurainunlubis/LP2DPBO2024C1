#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

from Clothing import Clothing

class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""

    #constructor
    def __init__(self,  color = "", slevee_type= ""):
        self.color = color
        self.slevee_type = slevee_type

    # Getter and Setter color
    def getColor(self):
        return self.__color
    def setColor(self, color):
        self.color = color
    
    # Getter and Setter slevee type
    def getSlevee_type(self):
        return self.__sleeve_type
    def setSlevee_type(self, slevee_type):
        self.__sleeve_type = slevee_type