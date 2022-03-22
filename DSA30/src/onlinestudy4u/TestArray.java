package onlinestudy4u;

class TestArray{  
	public static void main(String args[]){  
		
		int a[]=new int[5];//declaration and instantiation  [1,2,3,4,5,6,67,8]
		
		a[0]=10;//initialization  var a=10
		a[1]=20;  
		a[2]=70;  
		a[3]=40;  
		a[4]=50; 
		
		
		//traversing array  
		for(int i=0;i<a.length;i++)//length is the property of array  
			System.out.println(a[i]); 
		
		System.out.println(a[3]); 
		
		
	}
}  


//int a[]={33,3,4,5};//declaration, instantiation and initialization  
////printing array  
//for(int i=0;i<a.length;i++)//length is the property of array  
//System.out.println(a[i]);  



//For each

//int arr[]={33,3,4,5};  
////printing array using for-each loop  
//for(int i:arr)  
//System.out.println(i); 
//
//[1,2,3,4,5,6,67,8]
//[1,2,3,4,5,6,67,8]
//[1,2,3,4,5,6,67,8]


				  