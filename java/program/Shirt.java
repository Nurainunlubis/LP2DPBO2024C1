class Shirt extends Clothing {
    private String color;
    private String sleeveType;

    public Shirt(String idProduct, String name, String brand, String price, String size, String material, String gender, String color, String sleeveType) {
        super(idProduct, name, brand, price, size, material, gender);
        this.color = color;
        this.sleeveType = sleeveType;
    }

    // Getter and setter color
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    
    // Getter and setter Sleeve Type
    public String getSleeveType() {
        return sleeveType;
    }
    public void setSleeveType(String sleeveType) {
        this.sleeveType = sleeveType;
    }
}