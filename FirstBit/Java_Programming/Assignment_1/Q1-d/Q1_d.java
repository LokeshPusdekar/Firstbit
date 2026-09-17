class Employee
{
    int id;
    String name;
    int salary;
   

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
        


}

class Display
{
    public static void main(String args[])
    {
        Employee d1 = new Employee();
        d1.setid(101);
        d1.setname("Lokesh");
        d1.setsalary(50000);

        System.out.println("Id     = "+d1.getid());
        System.out.println("Name   = "+d1.getname());
        System.out.println("Salary = "+d1.getsalary());
    }
}