package dsc;

import java.util.Scanner;
public class Queue2
{
 Node1 front;
Node1 rear; 
 int currentSize; 
 
 public class Node
 { 
 int data;
 Node1 next;
 }

 public Queue2(int n)
 {
 front = null;
 rear = null;
 currentSize = 0;
 }
 
 public boolean isEmpty()
 {
 return (currentSize == 0);
 }
	    public int dequeue()
	    {
	    int data = front.data;
	    front = front.next;
	    if (isEmpty()) 
	    {
	    rear = null;
	    }
	    currentSize--;
	    System.out.println(data+ " removed from the queue");
	    return data;
	    }

	    
	    public void enqueue(int data)
	    {
	    Node1 oldRear = rear;
	    rear = new Node1();
	    rear.data = data;
	    rear.next = null;
	    if (isEmpty()) 
	    {
	    front = rear;
	    }
	    else 
	    {
	    oldRear.next = rear;
	    }
	    currentSize++;
	    System.out.println(data+ " added to the queue");
	    }
	  
	    public void display()
	    {
	        System.out.print("\nQueue = ");
	        if (currentSize == 0)
	        {
	            System.out.print("Empty\n");
	            return ;
	        }
	        Node1 ptr = front;
	        while (ptr != rear.getLink() )
	        {
	            System.out.print(ptr.getData()+" ");
	            ptr = ptr.getLink();
	        }
	        System.out.println();        
	    }

	}