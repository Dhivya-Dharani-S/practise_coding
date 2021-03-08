package mypack2;

import java.util.Scanner;

class CalculateBill
{	
	double billpay;
	
     CalculateBill() 
       { 
          System.out.println("Bill To Pay:");
       }
        
	double Bill(long units)
	{
  	  if(units<100)
		billpay=units*1.20;
		
	  else if(units<=300)
		billpay=100*1.20+(units-100)*2;
		
	  else if(units>300)
		billpay=100*1.20+200 *2+(units-300)*3;
		
	  return billpay;  
         }	 
 
	
}
interface Details
{
public void billDetails();
public void fineDetails();
}
class billInfo implements Details
{
public void billDetails()
{
 System.out.println("\n***** BILL DETAILS ******\n");
 System.out.println("UNITS \t\t AMOUNT \n");
 System.out.println("  <100  \t Rs.1.20 per units \n  <300 \t\t 0-100 units -Rs.1.20 per units + 101-300 units -Rs.2.00 per units \n  >300 \t\t 0-100 units -Rs.1.20 per units + 101-300 units -Rs.2.00 per units + 301-... units -Rs.3.00 per units\n  ");
 
}
public void fineDetails()
{
 System.out.println("\n***** FINE DETAILS ******\n");
 System.out.println("MONTH \t\t FINE AMOUNT \n");
 System.out.println(" Per Month  \t\t Rs.60.00 \n ");
 
}
}




public class ComputeElectricityBill extends CalculateBill
{ 
        public static void main(String args[]) 
        {   
	    long units;
	    double RESULT;
	    int choice;
	    boolean yes=true;
	    Scanner sc=new Scanner(System.in);
	    while(yes)
	    {
	    System.out.println("1.Calculate Bill\n2.View Bill Details\n3.Fine Details\n4.Exit");
            System.out.println("enter your choice:");
            choice=sc.nextInt();
	    
 	switch(choice)
 	{
 	case 1:
 	{
	    System.out.println("enter number of units");
	   
            units=sc.nextLong();
            
 
            ComputeElectricityBill b=new ComputeElectricityBill();
            RESULT = b.Bill(units);
        	
      	    System.out.println(RESULT);
      	    System.out.println("\n***** INVOICE DETAILS ******\n Consumed Units -"+ units);
      	    System.out.println("\n Electricity Bill - " + RESULT ); 
      	    System.out.println("\n**************************************");
      	    break;
       } 
       case 2:
       {
         billInfo obj1 = new billInfo();
         obj1.billDetails();
         
         break;
         
       }
       case 3:
       {
        billInfo obj2 = new billInfo();
        obj2.fineDetails();
        break;
       }
       
       case 4:
       {
         yes=false;
         break;
       }
}
System.out.println("\n"); 
}
}
}
