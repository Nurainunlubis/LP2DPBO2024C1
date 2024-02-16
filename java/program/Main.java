import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Shirt> shirts = new ArrayList<>();

        System.out.print("Masukkan jumlah baju yang ingin diinput: ");
        int numProducts = scanner.nextInt();
        scanner.nextLine(); // Membersihkan newline

        for (int i = 0; i < numProducts; i++) {

            System.out.println("\nMasukkan data untuk Baju ke-" + (i + 1));
            // Meminta input untuk data Product
            System.out.print("ID  : ");
            String productId = scanner.nextLine ();
            System.out.print("Nama  : ");
            String productName = scanner.nextLine();
            System.out.print("Brand  : ");
            String productBrand = scanner.nextLine();
            System.out.print("Harga  : ");
            String productPrice = scanner.nextLine();

            // Membuat objek Product
            Product product = new Product(productId, productName, productBrand, productPrice);

            // Meminta input untuk Clothing
            System.out.print("Ukuran  : ");
            String clothingSize = scanner.nextLine();
            System.out.print("Material  : ");
            String clothingMaterial = scanner.nextLine();
            System.out.print("Gender  : ");
            String clothingGender = scanner.nextLine();

            // Membuat objek Clothing
            Clothing clothing = new Clothing(productId, productName, productBrand, productPrice, clothingSize, clothingMaterial, clothingGender);

            // Meminta input untuk Shirt
            System.out.print("Warna : ");
            String shirtColor = scanner.nextLine();
            System.out.print("Jenis Lengan : ");
            String shirtSleeveType = scanner.nextLine();

            // Membuat objek Shirt
            Shirt shirt = new Shirt(productId, productName, productBrand, productPrice, clothingSize, clothingMaterial, clothingGender, shirtColor, shirtSleeveType);

            shirts.add(shirt);
        }

        // Menampilkan tabel
        displayTable(shirts);
    }

    private static void displayTable(ArrayList<Shirt> shirts) {
        int[] columnWidths = new int[9];

        // Menghitung panjang maksimum untuk setiap kolom
        for (Shirt shirt : shirts) {
            columnWidths[0] = Math.max(columnWidths[0], String.valueOf(shirt.getIdProduct()).length());
            columnWidths[1] = Math.max(columnWidths[1], shirt.getName().length());
            columnWidths[2] = Math.max(columnWidths[2], shirt.getBrand().length());
            columnWidths[3] = Math.max(columnWidths[3], String.valueOf(shirt.getPrice()).length());
            columnWidths[4] = Math.max(columnWidths[4], shirt.getSize().length());
            columnWidths[5] = Math.max(columnWidths[5], shirt.getMaterial().length());
            columnWidths[6] = Math.max(columnWidths[6], shirt.getGender().length());
            columnWidths[7] = Math.max(columnWidths[7], shirt.getColor().length());
            columnWidths[8] = Math.max(columnWidths[8], shirt.getSleeveType().length());
        }

        // Format untuk header dan baris tabel
        String headerFormat = createFormat(columnWidths);
        String lineFormat = createLineFormat(columnWidths);

        System.out.println(lineFormat);
        System.out.printf(headerFormat, "ID", "Nama", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");
        System.out.println();
        System.out.println(lineFormat);

        for (Shirt shirt : shirts) {
            System.out.printf(headerFormat, shirt.getIdProduct(), shirt.getName(), shirt.getBrand(), shirt.getPrice(),
                    shirt.getSize(), shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getSleeveType());
            System.out.println();
            System.out.println(lineFormat);
        }
    }


    // Membuat format untuk header dan baris tabel
    private static String createFormat(int[] columnWidths) {
        StringBuilder format = new StringBuilder("|");

        for (int width : columnWidths) {
            format.append(" %-").append(width + 2).append("s |");
        }

        return format.toString();
    }

    // Membuat format garis untuk header dan baris tabel
    private static String createLineFormat(int[] columnWidths) {
        StringBuilder lineFormat = new StringBuilder("+");

        for (int width : columnWidths) {
            lineFormat.append(repeatString("-", width + 4)).append("+");
        }

        return lineFormat.toString();
    }

    private static String repeatString(String str, int times) {
        return new String(new char[times]).replace("\0", str);
    }
}