class SalesManager
{
    int id;
    String name;
    int salary;
    int target;
    int incentive;
   

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

    void settarget(int target)
    {
        this.target = target;
    }

    void setincentive(int incentive)
    {
        this.incentive = incentive;
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
        
    int gettarget()
    {
        return this.target;
    }

    int getincentive()
    {
        return this.incentive;
    }

}

class Display
{
    public static void main(String args[])
    {
        SalesManager d1 = new SalesManager();
        d1.setid(101);
        d1.setname("Lokesh");
        d1.setsalary(50000);
        d1.settarget(5000);
        d1.setincentive(2000);

        System.out.println("Id        = "+d1.getid());
        System.out.println("Name      = "+d1.getname());
        System.out.println("Salary    = "+d1.getsalary());
        System.out.println("Target    = "+d1.getsalary());
        System.out.println("Incentive = "+d1.getsalary());
    }
}