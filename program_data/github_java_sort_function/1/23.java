package JavaConcepts;

import java.util.Scanner;

public class Insertionsort {

	public static int [] arr= new int[5];
	
	public static void main(String[] args) {
	for (int i=0; i<arr.length;i++){
		Scanner sn=  new Scanner(System.in);
		arr[i] = sn.nextInt();
	}
	
	for(int i=1;i<arr.length;i++){
	int j=i-1;
	while(j>=0 && arr[j]>arr[j+1]){
		int temp= arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		j--;
	}
		
	}
		
	}
	
	
}
