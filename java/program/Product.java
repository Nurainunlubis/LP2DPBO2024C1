class Product {
    private String idProduct;
    private String name;
    private String brand;
    private String price;

    public Product(String idProduct, String name, String brand, String price) {
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // Getter and setter Id Product
    public String getIdProduct() {
        return idProduct;
    }
    public void setIdProduct(String idProduct){
        this.idProduct = idProduct;
    }

    // Getter and setter Name Product
    public String getName() {
        return name;
    }
    public void setName(String name)
    {
        this.name = name;   
    }
    
    // Getter and setter Brand Product
    public String getBrand() {
        return brand;
    }
    public void setBrand(String brand){
        this.brand = brand;
    }

    //Getter and setter price
    public String getPrice() {
        return price;
    }
    public void setPrice(String Price){
        this.price = price; 
    }
}