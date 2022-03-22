package onlinestudy4u;

public class Addition   
{  
	public static void main(String[] args)   
	{  
		int a = 19;  
		int b = 5;  
		//method calling  
		int c = add(a, b);   //a and b are actual parameters  
		System.out.println("The sum of a and b is= " + c);  
		
		//int d=add(a,b);
		//d=s;
	}  
	
	//user defined method  
	public static int add(int n1, int n2)  //add(a,b) //n1 and n2 are formal parameters  
	{  
		int s;  
		s=n1+n2; // 
		return s; //returning the sum  
	}  
}  
// int a1=1, a2=3,,//.

//storage[]={1,2,3,4,5,6}
//			 0,1,2,3,4,5

//int a=1,b=2,c=3...
// storage[]={ 1, 2 ,3 }
//	           0  1  2