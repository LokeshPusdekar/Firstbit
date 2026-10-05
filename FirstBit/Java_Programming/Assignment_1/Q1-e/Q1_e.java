class HR
{
    int id;
    String name;
    int salary;
    int commision;
   

    void setid(int id)
    {
        this.id = id;
    }
    
    void setname(String name)
    {
        this.name = name;
    }
    
    void setsalary(int salary)
    {
        this.salary = salary;
    }

    void setCommision(int commision)
    {
        this.commision = commision;
    }
           
    
    int getid()
    {
        return this.id;
    }
    
    String getname()
    {
    return this.name;    
    }
        
    int getsalary()
    {
    return this.salary;    
    }
        
    int getCommision()
    {
        return this.commision;
    }

}

class Display
{
    public static void main(String args[])
    {
        HR d1 = new HR();
        d1.setid(101);
        d1.setname("Lokesh");
        d1.setsalary(50000);
        d1.setCommision(5000);

        System.out.println("Id        = "+d1.getid());
        System.out.println("Name      = "+d1.getname());
        System.out.println("Salary    = "+d1.getsalary());
        System.out.println("Commision = "+d1.getsalary());
    }
}