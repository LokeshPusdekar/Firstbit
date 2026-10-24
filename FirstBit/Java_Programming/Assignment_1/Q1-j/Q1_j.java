class mobile
{
    String brand;
    String type;
    String color;
    int price;
   

    void setbrand(String brand)
    {
        this.brand = brand;
    }
    
    void  settype(String type)
    {
        this.type = type;
    }
    
    void  setcolor(String color)
    {
        this.color = color;
    }

    void setprice(int price)
    {
        this.price = price;
    }
           
    
    String getbrand()
    {
        return this.brand;
    }
    
    String gettype()
    {
    return this.type;    
    }
        
    String getcolor()
    {
    return this.color;    
    }
        
    int getprice()
    {
        return this.price;
    }

}

class Display
{
    public static void main(String args[])
    {
        mobile d1 = new mobile();
        d1.setbrand("Samsung");
        d1.settype("Android");
        d1.setcolor("Black");
        d1.setprice(80000);

        System.out.println("Mobile Brand    = "+d1.getbrand());
        System.out.println("Type of mobile  = "+d1.gettype());
        System.out.println("Color           = "+d1.getcolor());
        System.out.println("Price of Mobile = "+d1.getcolor());
    }
}