
public static void mergesort(int[] array) {
	int[] helper = new int[array.length];
	sort(array, helper, 0, array.length -1);
}

public static void sort(int[] array, int[] helper, int low, int high) {
	if(low < high) {
		int middle = (low + high) / 2;
		sort(array, helper, low, middle); 
		sort(array, helper, middle+1, high); 
		merge(array, helper, low, middle, high); 
	}
}

public static void merge(int[] array, int[] helper, int low, int middle, int high) {
	
	for(int i = low; i <= high; i++) {
		helper[i] = array[i];
		System.out.println(helper[i]);
	}
	
	int helperLeft = low;
	int helperRight = middle+1;
	int current = low;
	
	
	
	
	while(helperLeft <= middle && helperRight <= high) {
		if(helper[helperLeft] <= helper[helperRight]) {
			array[current] = helper[helperLeft];
			helperLeft++;
		}
		else {
			array[current] = helper[helperRight];
			helperRight++;
		}
		current++;
	}
	
	
	int remaining = middle - helperLeft;
	for(int i = 0; i <= remaining; i++) {
		array[current + i] = helper[helperLeft + i];
	}
}

