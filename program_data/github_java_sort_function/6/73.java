package br.facisa.p3.ed.sortingAlgorithms;

public class RadixSort {
	
	public static void sort(int[] array){
		int head;
		head = getHead(array);
		int exp = 1;
		int[] arrayf = new int[array.length];
		
		while (head/exp > 0){
			int[] aux = new int[10];
			
			for (int i = 0; i < array.length; i++){
				aux[(array[i]/exp)%10]++;
			}
			for (int i = 1; i < 10; i ++){
				aux[i] += aux[i-1];
			}
			for (int i = array.length -1; i >= 0; i--){
				arrayf[--aux[(array[i]/exp)%10]] = array[i];
			}
			for (int i = 0; i < array.length; i ++){
				array[i] = arrayf[i];
			}
			exp *= 10;
		}
	}
	
	private static int getHead(int[] array){
		int head = array[0];
		for (int i = 0; i < array.length; i++){
			if (head < array[i]){
				head = array[i];
			}
		}
		return head;
	}
	
}
