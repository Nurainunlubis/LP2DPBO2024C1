# LP2DPBO2024C1
## JANJI 
```bash
Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

```

## Desain Program 
1. **Class `Product`:**
   - Atribut: `idProduct`, `name`, `brand`, `price`.
   - Ini adalah kelas dasar yang merepresentasikan produk dengan atribut dasar.

2. **Class `Clothing` (Turunan dari `Product`):**
   - Atribut: `size`, `material`, `gender`.
   - Mewarisi atribut dari kelas `Product` dan menambahkan atribut yang khusus untuk pakaian.

3. **Class `Shirt` (Turunan dari `Clothing`):**
   - Atribut: `color`, `sleeve_type`.
   - Mewarisi atribut dari kelas `Clothing` dan menambahkan atribut yang khusus untuk kemeja.

program ini, hubungan antara kelas-kelas ini mencerminkan konsep Multi-level Inheritance. Artinya, Shirt mewarisi atribut dan metode dari kelas Clothing, yang pada gilirannya mewarisi dari kelas Product.

Dengan desain ini, Anda dapat membuat objek kemeja dengan semua atribut yang diperlukan, dan masing-masing kelas memiliki keunggulan hierarki yang mencerminkan hubungan semantik di antara konsep produk, pakaian, dan kemeja.

Dalam contoh penggunaan, ketika Anda membuat objek Shirt, objek tersebut dapat mengakses atribut dari ketiga kelas, sehingga menciptakan hierarki warisan yang berlaku.

Semua ini bertujuan untuk menciptakan struktur kelas yang bersih, terorganisir, dan mudah dimengerti, dengan menggunakan konsep Multi-level Inheritance untuk merepresentasikan hubungan "is-a" antara kelas-kelas tersebut.

## Penjelasan Alur kode Program
1. Pembuatan Objek Shirt:

- Dimulai dengan membuat objek dari kelas Shirt.
Objek Shirt secara tidak langsung memiliki akses ke atribut dari ketiga kelas, yaitu Product, Clothing, dan Shirt.
Warisan Atribut:

- Shirt mewarisi atribut dari kelas Clothing, yang mewarisi dari kelas Product.
Oleh karena itu, objek Shirt memiliki atribut seperti idProduct, name, brand, price, size, material, gender, color, dan sleeve_type.

2. Meminta inputan pada user untuk banyaknya data di semua bahasa pemograman yaitu : C++, Java, Python dan PHP
3. Selanjutnya meminta inputan data sebanyak jumlah inputan yang di minta
4. Jika inputan berhasil di buat maka akan program di setiap bahsanya  akan memberikan Output dari data nya.


## Dokumentasi
1. C++ 
<img width="960" alt="Hasil LP2 C++" src="https://github.com/Nurainunlubis/LP2DPBO2024C1/assets/113582460/c471b9f3-9b87-48de-b841-aa203664e118">

2. Java
<img width="455" alt="Screenshot 2024-02-16 151553" src="https://github.com/Nurainunlubis/LP2DPBO2024C1/assets/113582460/21e52201-4122-443c-9b72-112585db25a7">

3. Python
<img width="959" alt="Hasil Python" src="https://github.com/Nurainunlubis/LP2DPBO2024C1/assets/113582460/510898e9-c5c7-4b20-b613-192b60fa930a">

4. PHP
<img width="478" alt="Hasil LP2 php" src="https://github.com/Nurainunlubis/LP2DPBO2024C1/assets/113582460/b8b47b52-eb80-4d3e-af1b-a07a92da4220">

## Diagram 
<img width="115" alt="Diagram LP2DPBO" src="https://github.com/Nurainunlubis/LP2DPBO2024C1/assets/113582460/387f935c-4014-4252-8f3f-ab89f28bf7e9">

