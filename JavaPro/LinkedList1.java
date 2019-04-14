package dsc;
public class LinkedList1
{
     Node1 start;
     Node1 end ;
     int size ;

    public void linkedList1()
    {
        start = null;
        end = null;
        size = 0;
    }
    public int getsize() {
   	 return size;
    }
   
void insertAtStart(int val)
   {
       Node1 node = new Node1(val, null);    
       size++ ;    
       if(start == null) 
       {
           start = node;
           
           end = start;
       }
       else 
       {
           node.setLink(start);
           start = node;
       }
   }
void insertAtEnd(int val) {
	 Node1 node = new Node1(val,null);    
       size++ ;    
       if(start == null) 
       {
           start = node;
           end = start;
       }
       else 
       {
           end.setLink(node);
           end = node;
       }
}
void insertAtPos(int val,int pos)
   {
       Node1 node = new Node1(val, null);                
       Node1 p = start;
       pos = pos - 1 ;
       for (int i = 1; i < size; i++) 
       {
           if (i == pos) 
           {
               Node1 temp = p.getLink() ;
               p.setLink(node);
               node.setLink(temp);
               break;
           }
         
           p = p.getLink();
       }
       size++ ;
   }
public void display() {
	 System.out.println("linked list is");
	 if(size == 0) {
		 System.out.println("empty\n");
		 return;
	 }
	 if(start.getLink() == null) {
		 System.out.println(start.getData());
		 return;
	 }
	 Node1 p = start;
       System.out.print(" "+start.getData());
       p = start.getLink();
       while (p.getLink() != null)
       {
           System.out.print(p.getData());
           p = p.getLink();
       }
       System.out.print(p.getData()+ "\n");
   }
}