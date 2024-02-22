<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
            table {
            border-collapse: collapse;
            width: 100%;
            margin-top: 20px;
        }
        
        th, td {
            border: 1px solid black;
            padding: 10px;
            text-align: left;
        }

        th {
            background-color: #f2f2f2;
        }

        tr:nth-child(even) {
            background-color: #f9f9f9;
        }

        tr:hover {
            background-color: #e0e0e0;
        }
    </style>
</head>
<body>
    <?php
    require_once('Shirt.php');

    echo "<h2>LIST PRODUCT </h2>";
    echo "<table>";
    echo "<tr>
            <th>ID</th>
            <th>Name</th>
            <th>Brand</th>
            <th>Price</th>
            <th>Size</th>
            <th>Material</th>
            <th>Gender</th>
            <th>Color</th>
            <th>Sleeve Type</th>
          </tr>";

    $counter = 0;

    // Shirt 1
    $shirt1 = new Shirt();
    $shirt1->set_IdProduct("1");
    $shirt1->set_Name("Hoodie");
    $shirt1->set_Brand("Adidas");
    $shirt1->set_Price("999000");
    $shirt1->set_Size("XL");
    $shirt1->set_Material("Polyester");
    $shirt1->set_Gender("Unisex");
    $shirt1->set_Color("Black");
    $shirt1->set_Sleeve_Type("Long");

    echo "<tr style='background-color: " . ($counter % 2 == 0 ? "#ffffff" : "#f2f2f2") . ";'>";
    echo "<td>" . $shirt1->get_IdProduct() . "</td>";
    echo "<td>" . $shirt1->get_Name() . "</td>";
    echo "<td>" . $shirt1->get_Brand() . "</td>";
    echo "<td>" . $shirt1->get_Price() . "</td>";
    echo "<td>" . $shirt1->get_Size() . "</td>";
    echo "<td>" . $shirt1->get_Material() . "</td>";
    echo "<td>" . $shirt1->get_Gender() . "</td>";
    echo "<td>" . $shirt1->get_Color() . "</td>";
    echo "<td>" . $shirt1->get_Sleeve_Type() . "</td>";
    echo "</tr>";
    $counter++;

    // Shirt 2
    $shirt2 = new Shirt();
    $shirt2->set_IdProduct("2");
    $shirt2->set_Name("T-Shirt");
    $shirt2->set_Brand("POLO");
    $shirt2->set_Price("450000");
    $shirt2->set_Size("L");
    $shirt2->set_Material("Cotton");
    $shirt2->set_Gender("Male");
    $shirt2->set_Color("Navy");
    $shirt2->set_Sleeve_Type("Short");

    echo "<tr style='background-color: " . ($counter % 2 == 0 ? "#ffffff" : "#f2f2f2") . ";'>";
    echo "<td>" . $shirt2->get_IdProduct() . "</td>";
    echo "<td>" . $shirt2->get_Name() . "</td>";
    echo "<td>" . $shirt2->get_Brand() . "</td>";
    echo "<td>" . $shirt2->get_Price() . "</td>";
    echo "<td>" . $shirt2->get_Size() . "</td>";
    echo "<td>" . $shirt2->get_Material() . "</td>";
    echo "<td>" . $shirt2->get_Gender() . "</td>";
    echo "<td>" . $shirt2->get_Color() . "</td>";
    echo "<td>" . $shirt2->get_Sleeve_Type() . "</td>";
    echo "</tr>";
    $counter++;

    // Shirt 3
    $shirt3 = new Shirt();
    $shirt3->set_IdProduct("3");
    $shirt3->set_Name("Dress");
    $shirt3->set_Brand("Zara");
    $shirt3->set_Price("450000");
    $shirt3->set_Size("M");
    $shirt3->set_Material("Silk");
    $shirt3->set_Gender("Female");
    $shirt3->set_Color("White");
    $shirt3->set_Sleeve_Type("Sleeveless");

    echo "<tr style='background-color: " . ($counter % 2 == 0 ? "#ffffff" : "#f2f2f2") . ";'>";
    echo "<td>" . $shirt3->get_IdProduct() . "</td>";
    echo "<td>" . $shirt3->get_Name() . "</td>";
    echo "<td>" . $shirt3->get_Brand() . "</td>";
    echo "<td>" . $shirt3->get_Price() . "</td>";
    echo "<td>" . $shirt3->get_Size() . "</td>";
    echo "<td>" . $shirt3->get_Material() . "</td>";
    echo "<td>" . $shirt3->get_Gender() . "</td>";
    echo "<td>" . $shirt3->get_Color() . "</td>";
    echo "<td>" . $shirt3->get_Sleeve_Type() . "</td>";
    echo "</tr>";
    $counter++;

    echo "</table>";
    ?>
</body>

</html>


</html>
