class Student
{
    int frn;
    String studentName;
    int distanceCovered;


    void setfrn(int frn)
    {
        this.frn = frn;
    }
    
    void setstudentName(String s_name)
    {
        this.studentName = s_name;
    }
    
    void setdistanceCovered(int distance)
    {
        this.distanceCovered = distance;
    }
    
         
    
    int getfrn()
    {
        return this.frn;
    }
    
    String getstudentName()
    {
    return this.studentName;    
    }
        
    int getdistanceCovered()
    {
    return this.distanceCovered;    
    }
        



}

class Display
{
    public static void main(String args[])
    {
        Student d1 = new Student();
        d1.setfrn(12345);
        d1.setstudentName("Lokesh");
        d1.setdistanceCovered(200);
      

        System.out.println("frn             = "+d1.getfrn());
        System.out.println("studentName     = "+d1.getstudentName());
        System.out.println("distanceCovered = "+d1.getdistanceCovered());
       
    }
}