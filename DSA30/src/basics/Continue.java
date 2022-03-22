package basics;

public class Continue {
	public static void main(String[] args) {  
	    //for loop  
	    for(int i=1;i<=10;i++){  
	        
	        System.out.println(i);  
//	        System.out.println(i);  
//	        System.out.println(i); 
	        if(i==5){  
	            //using continue statement  
	            continue;//it will skip the rest statement  
	        }  
	        
	        System.out.println("print after");
	    }  
	}  
}

