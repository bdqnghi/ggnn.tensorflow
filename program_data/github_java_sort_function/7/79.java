package order;



public class ShellSort {
	
	int[] ShellSort;
	
	public ShellSort(int[] arr){
		ShellSort = arr;
		shellSort(ShellSort);
	}
	public int[] getShellSort() {
		return ShellSort;
	}

	
	public void shellSort(int[] array) {
		int inner, outer;
		int temp;

		int h = 1;
		while (h <= array.length / 3) {
			h = h * 3 + 1;
		}
		while (h > 0) {
			for (outer = h; outer < array.length; outer++) {
				temp = array[outer];
				inner = outer;

				while (inner > h - 1 && array[inner - h] >= temp) {
					array[inner] = array[inner - h];
					inner -= h;
				}
				array[inner] = temp;
			}
			h = (h - 1) / 3;
		}
	}
}
