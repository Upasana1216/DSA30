package onlinestudy4u;

import java.util.*;  
class UserInputDemo   
{  
	public static void main(String[] args)  
	{  
		Scanner sc= new Scanner(System.in);
//		
//		System.out.print("Enter first number- ");  
//		int a= sc.nextInt();  
//		
//		System.out.print("Enter second number- ");  
//		int b= sc.nextInt();  
//		
//		System.out.print("Enter third number- ");  
//		int c= sc.nextInt();  
//		
//		int d=a+b+c;  
//		System.out.println("Total= " +d);  
//		
		System.out.println("Enter a string: ");  
		String str= sc.nextLine();              //reads string  
		System.out.print("You have entered: "+str);  
		
		int a[]=new int[5];//declaration and instantiation  [1,2,3,4,5,6,67,8]
		
		a[0]=10;//initialization  var a=10
		a[1]=20;  
		a[2]=70;  
		a[3]=40;  
		a[4]=50; 
		
		for(int i=0;i<5;i++) {
			int x=sc.nextInt();
			a[i]=x;
		}
		
	}  
	
}  
