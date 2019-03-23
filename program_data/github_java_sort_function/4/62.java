import java.util.*;
import java.io.*;

public class heapsort
{



	
	public static void displayHeap(int a[])
	{
		for(int i=1;i<=a[0];i++)     
		{
			System.out.println(a[i]+" ");
		}
	}

  
  public static void check(int a[],int i,int n)
  {
    int t;
    if(i==n)                          
      return;
    else
    {
       if((2*i)<=n)     
       if(a[i]<a[2*i])     
       {
          t=a[i];
          a[i]=a[2*i];
          a[2*i]=t;

       }
       if((2*i+1)<=n)     
       if(a[i]<a[2*i+1])   
       {
          t=a[i];
          a[i]=a[2*i+1];
          a[2*i+1]=t;

       }
       if(2*i<=n)         
       check(a,2*i,n);   
       if(2*i+1<=n)       
       check(a,2*i+1,n);  
    }
  }


  
  public static void heapSort(int a[])
  { 
    
    while(a[0]!=0)                      
    {
    System.out.print(a[1]+", ");         
    a[1]=a[a[0]];                       
    --a[0];                           
    int i=1;
    check(a,i,a[0]);             
    }
  }
  
  
  }
