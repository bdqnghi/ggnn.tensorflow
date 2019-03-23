import java.util.*;
import java.lang.*;

class Insertion
{
	public static void main(String args[])
	{
		int arr[],i,j,size,temp;
	
		for(i = 1; i < size; i++)
		{
			temp = arr[i];
			for(j=i-1; j>=0 && temp<arr[j];j--)
				arr[j+1] = arr[j];
			arr[j+1] = temp;
		}
		
	
	}
}