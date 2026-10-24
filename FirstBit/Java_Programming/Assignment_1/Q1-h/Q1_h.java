class BankAccount
{
    int accountNumber;
    String name;
    int currentBalance;
    int interestRate;
   

    void setaccountNumber(int accountNumber)
    {
        this.accountNumber = accountNumber;
    }
    
    void  setname(String name)
    {
        this.name = name;
    }
    
    void  setcurrentBalance(int currentBalance)
    {
        this.currentBalance = currentBalance;
    }

    void setinterestRate(int interestRate)
    {
        this.interestRate = interestRate;
    }
           
    
    int getaccountNumber()
    {
        return this.accountNumber;
    }
    
    String getname()
    {
    return this.name;    
    }
        
    int getcurrentBalance()
    {
    return this.currentBalance;    
    }
        
    int getinterestRate()
    {
        return this.interestRate;
    }

}

class Display
{
    public static void main(String args[])
    {
        BankAccount d1 = new BankAccount();
        d1.setaccountNumber(101);
        d1.setname("Lokesh");
        d1.setcurrentBalance(50000);
        d1.setinterestRate(8 );

        System.out.println("Account Number  = "+d1.getaccountNumber());
        System.out.println("Name.          = "+d1.getname());
        System.out.println("Current Balance = "+d1.getcurrentBalance());
        System.out.println("Interest Rate   = "+d1.getcurrentBalance());
    }
}