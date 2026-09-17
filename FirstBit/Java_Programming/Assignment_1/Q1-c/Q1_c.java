class PlacedStudent
{
    int frn;
    String studentName;
    int distanceCovered;
    String companyName;
    String designation;

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
    
    void setcompanyName(String c_name)
    {
        this.companyName = c_name;
    }  
    
    void setdesignation(String designation)
    {
        this.designation = designation;
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
        
    String getcompanyName()
    {
    return this.companyName;    
    }

    String getdesignation()
    {
        return this.designation;
    }

}

class Display
{
    public static void main(String args[])
    {
        PlacedStudent d1 = new PlacedStudent();
        d1.setfrn(123454);
        d1.setstudentName("Lokesh");
        d1.setdistanceCovered(200);
        d1.setcompanyName("Wipro");
        d1.setdesignation("Devloper");
        System.out.println("frn              = "+d1.getfrn());
        System.out.println("Student Name     = "+d1.getstudentName());
        System.out.println("Distance Covered = "+d1.getdistanceCovered());
        System.out.println("Comapany Name    = "+d1.getcompanyName());
        System.out.println("Designation      = "+d1.getdesignation());
    }
}