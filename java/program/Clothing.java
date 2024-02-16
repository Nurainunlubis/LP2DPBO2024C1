public class Clothing extends Product {
    private String size;
    private String material;
    private String gender;

    public Clothing(String idProduct, String name, String brand, String price, String size, String material, String gender) {
        super(idProduct, name, brand, price);
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // Getter and Setter Size
    public String getSize() {
        return size;
    }
    public void setSize(String size) {
        this.size = size;
    }

    // Getter and Setter Material
    public String getMaterial() {
        return material;
    }
    public void setMaterial(String material) {
        this.material = material;
    }

    // Getter and Setter Gender
    public String getGender() {
        return gender;
    }
    public void setGender(String gender){
        this.gender = gender;
    }
}
