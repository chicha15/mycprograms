package dsc;
import java.util.*;
import java.io.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Project1 {
	
	public static void main(String[] args) throws IOException {

        choose();

    } 
	
	 public static void choose() throws IOException {
		 int choice;
		 
		    int array = 1;
	        int stack = 2;
	        int queue = 3;
	        int linkedlist = 4;
	        
	        Scanner keyboard = new Scanner(System.in);

	        System.out.println("What type of datastructure would you like to select?");
	        System.out.println("1. array");
	        System.out.println("2. stack");
	        System.out.println("3. queue");
	        System.out.println("4. linkedlist");

	        choice = keyboard.nextInt();
	 
	        if (choice == 1) { 
	        	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	        	System.out.print("enter the string of intergers ");
	            String[] arr=reader.readLine().split(",1");
	            int[] intarr=new int[arr.length];

	            for(int i=0;i<arr.length;i++) {
	             intarr[i]=Integer.parseInt(arr[i]);
	            }
	            System.out.print("integers in the array are\n");
	            for(int i=0;i<intarr.length;i++) {
	            	System.out.println("" +intarr[i]);
	            }
	            
	            } 
	        
	        else if (choice == 2) {
	        
	        	
	        	    int choice1=0;  
	        	    Scanner sc = new Scanner(System.in);  
	        	    Stack1 sr = new Stack1();    
	        	    while(choice1 != 4)  
	        	    {  
	        	        System.out.println("Chose one from the below options");  
	        	        System.out.println("1.Push"
	        	        		+ "2.Pop"
	        	        		+ "3.Show"
	        	        		+ "4.Exit");  
	        	        System.out.println("Enter your choice");        
	        	        choice1 = sc.nextInt();  
	        	        switch(choice1)  
	        	        {  
	        	            case 1:  
	        	            {   
	        	                sr.push(sc);  
	        	                break;  
	        	            }  
	        	            case 2:  
	        	            {  
	        	                sr.pop();  
	        	                break;  
	        	            }  
	        	            case 3:  
	        	            {  
	        	                 sr.display();  
	        	                break;  
	        	            }  
	        	            case 4:   
	        	            {  
	        	                System.out.println("Exited");  
	        	                System.exit(0);  
	        	                break;   
	        	            }  
	        	            default:  
	        	            {  
	        	                System.out.println("Please Enter correct choice ");  
	        	            }   
	        	        } 
	        	    }  
	        	  
	        }
	        	    else if (choice == 3) {
	        	    	int n;
	        	 System.out.println("give no. of elements required to insert into the queue "); 
	        			 Scanner scan = new Scanner(System.in);
		        			n = scan.nextInt();
	        	        Queue2 queue1 = new Queue2(n);
	        	        System.out.println("give the numbers");
	        	        for(int i=0;i<n;i++) {
	        	        	int temp=scan.nextInt();
	        	        	queue1.enqueue(temp);
	        	        }
	        	        queue1.display();
	        	      } 

	 if(choice == 4) {
		 
		 Scanner scan = new Scanner(System.in);
	        LinkedList1 list = new LinkedList1();         
	        int e = 0;
	        do
	        {
	            System.out.println("Linked List Operations\n");
	            System.out.println("1. insert at begining");
	            System.out.println("2. insert at end");
	            System.out.println("3. insert at position");          
	            int choice2 = scan.nextInt();            
	            switch (choice2)
	            {
	            case 1 : 
	                System.out.println("Enter integer element to insert");
	                list.insertAtStart( scan.nextInt());                     
	                break;                          
	            case 2 : 
	                System.out.println("Enter integer element to insert");
	                list.insertAtEnd( scan.nextInt());                     
	                break;                         
	            case 3 : 
	                System.out.println("Enter integer element to insert");
	                int num = scan.nextInt() ;
	                System.out.println("Enter position");
	                int pos = scan.nextInt() ;
	                if ( pos > list.getsize() )
	                    System.out.println("Invalid position\n");
	                else
	                    list.insertAtPos(num, pos);
	                break; 
	            case 4 :
	            	System.out.println("exiting");
	           
	             default : 
	                System.out.println("Wrong Entry\n ");
	                break;   
	            }
	            list.display();                      
	        } while (e!=4); 
	 
	 }
	 }
	 }

	 

