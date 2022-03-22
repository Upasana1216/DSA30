package basics;

public class Break {
	public static void main(String[] args) {  
	    //using for loop  
	    for(int i=1;i<=10;i++){  
	    	
	        if(i==5){  
	            //breaking the loop  
	            break;  
	        }  
	        System.out.println(i);  
	    } 
	    
	    System.out.println("came out of loop after break");
	}  
}

