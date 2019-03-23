//Implements insertion sort algorithm

//Olu Gbadebo
//Oct 4, 2016


public class Insertionsort {
	
	public static int[] sort(int[] list) {
		//this goes thru the array from the second element to the end
		//*second element: so as to avoid OutOfBoundException when checking the element before
		for (int i = 1; i < list.length; i++){
			//save the element we are checking
			int temp = list[i];
			//hold the index of the element before the element we are checking
			int j = i - 1;
			
			//this traverses thru the array from the index of the element we are checking backwards to 
			//beginning of the array.
			//while the element before the index we are checking is smaller and we are not at the 
			//beginning of the array
			while (j >= 0 && temp < list[j]){
				//swap elements
				list[j + 1] = list[j];
				j--;
			}
			//put the saved element in the right position
			list[j + 1] = temp;
		}
		return list;
	}
}