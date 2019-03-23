package sort;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class RadixSort {

	public static void main(String[] args) {
		
		int N = 1000;
		int list [] = new int [N];
		for(int i = 0; i < N; i++){
			list[i] =(int)( Math.random() * 10000);
		}
		printList(list);
		list = my_radix(list);
		System.out.println("done");
	}
	
	public static int[] my_radix(int [] list){
		LinkedList tmp [] = new LinkedList [list.length];
		for(int i = 0; i < tmp.length; i++){
			tmp[i] = new LinkedList();
		}
		int keySize = 0;
		for(int i = 0; i < list.length; i ++){
			if(String.valueOf(list[i]).length() > keySize){
				keySize = String.valueOf(list[i]).length();
			}
		}
		int i = 0;
		int [] tmp_list= new int [list.length];
		do{
			tmp_list= new int [list.length];


			for(int j = 0; j < list.length; j++){
				int digit = (int) (list[j] / Math.pow(10, i) % 10);
				tmp[digit].add(list[j]);
			}
			int counter = 0;
			for(int m = 0; m < 10; m++){
				while(!tmp[m].isEmpty()){
					tmp_list[counter] = (int) tmp[m].getFirst();
					tmp[m].removeFirst();
					counter++;
				}
			}
			list = tmp_list;
			i ++;

		}while(i <= keySize);
		
		printList(list);
		
		return list;
	}
	

	public static void printList(int list[]){		
		for(int i = 0; i < list.length; i++){
			if(i % 10 == 0){						
				System.out.println("");
			}
			System.out.print(list[i] + "  ");
		}
	}
	

	
}
