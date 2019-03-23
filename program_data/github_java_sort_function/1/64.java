/*
	Program : Implementation of Insertion Sort Algorithm in Java
	Author : Sarthak Yadav
	
	Principles: 
		- Insertion Sort is a sorting algorithm with a average case complexity of O(n^2)
		- For more details about Insertion Sort visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/sorting/
				 https://www.khanacademy.org/computing/computer-science/algorithms/insertion-sort/a/insertion-sort
		
	Instructions:
		- just compile from command line
*/

import java.util.Scanner;

public class InsertionSortDemo {

	public static void insertion_sort(int[] arr)
	{
		for(int j=1;j<=arr.length-1;j++)						//iterates from the 2nd element of the array (index no: 1)
		{
			int key=arr[j];										//sets key as the value on the current index
			int i=j-1;	
			while(i>=0 && arr[i]>key)							//keeps check if i is non negative and the other test condition
			{
				arr[i+1]=arr[i];
				i-=1;
			}
			arr[i+1]=key;
		}
	}
	

}
