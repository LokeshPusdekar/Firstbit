class Date
{
    int day;
    int month;
    int year;
    String dayofweek;

    void setDay(int d)
    {
        this.day = d;
    }
    
    void setMonth(int m)
    {
        this.month = m;
    }
    
    void setYear(int y)
    {
        this.year = y;
    }
    
    void setDayofWeek(String dw)
    {
        this.dayofweek = dw;
    }            
    
    int getDay()
    {
        return this.day;
    }
    
    int getMonth()
    {
    return this.month;    
    }
        
    int getYear()
    {
    return this.year;    
    }
        
    String getDayofWeek()
    {
    return this.dayofweek;    
    }


}

class Display
{
    public static void main(String args[])
    {
        Date d1 = new Date();
        d1.setDay(04);
        d1.setMonth(04);
        d1.setYear(2003);
        d1.setDayofWeek("Friday");
        System.out.println("Day         = "+d1.getDay());
        System.out.println("Month       = "+d1.getMonth());
        System.out.println("Year        = "+d1.getYear());
        System.out.println("Day of Week = "+d1.getDayofWeek());
    }
}