class admin
{
    int id;
    String name;
    int salary;
    int allowance;
   

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

    void setallowance(int allowance)
    {
        this.allowance = allowance;
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
        
    int getallowance()
    {
        return this.allowance;
    }

}

class Display
{
    public static void main(String args[])
    {
        admin d1 = new admin();
        d1.setid(101);
        d1.setname("Lokesh");
        d1.setsalary(50000);
        d1.setallowance(5000);

        System.out.println("Id        = "+d1.getid());
        System.out.println("Name      = "+d1.getname());
        System.out.println("Salary    = "+d1.getsalary());
        System.out.println("Allowance = "+d1.getsalary());
    }
}