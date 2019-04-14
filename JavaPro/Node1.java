package dsc;

public class Node1{
	 int data;
	 Node1 link;
	 Node1 next;
	 Node1 front;
	 Node1 rear;
	 int currentsize;
	 Node1(){
		 link = null;
		 next = null;
		 data = 0;
		 currentsize =0;
		 front = null;
		 rear = null;
	 }
	 public Node1(int d,Node1 n)
	 {
		 data = d;
		 link = n;
		 
	 }
	 public void setLink(Node1 n) {
		 link = n;
	 }
	 public void setData(int d) {
		 data = d;
	 }
	 public Node1 getLink() {
		 return link;
	 }
	 public int getData() {
		 return data;
	 }
}
