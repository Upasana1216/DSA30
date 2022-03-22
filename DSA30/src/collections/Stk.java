package collections;


import java.util.*;

public class Stk {
	
	public static void main(String args[]){ 
		
		Stack<String> stack = new Stack<String>();  //stack<datatype> name = new Stack<datatype>();
		
		stack.push("Ayush");  //inserting the element
		stack.push("Garvit");  
		stack.push("Amit");  
		stack.push("Ashish");  
		stack.push("Garima");  
		stack.pop();  //taking the top most element out
		
		Iterator<String> itr=stack.iterator();  
		while(itr.hasNext()){  
			System.out.println(itr.next());  
		}  
	}  

}

//qurue->-> 1 2 3 4 5<-
		
		
