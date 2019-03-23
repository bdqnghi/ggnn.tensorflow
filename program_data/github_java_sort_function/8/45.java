package sorting;

public class QuickSort {

	public static class QuickSortPartitionLast {
		public int[] quickSort(int[] nums) {
			quickSort(nums, 0, nums.length - 1);
			return nums;
		}

		private void quickSort(int[] nums, int low, int high) {
			if (low < high) {
				int pi = partitionLast(nums, low, high);
				quickSort(nums, low, pi - 1);
				quickSort(nums, pi + 1, high);
			}

		}

		private int partitionLast(int[] nums, int low, int high) {
			int pivot = nums[high];
			int i = (low - 1);
			for (int j = low; j <= high - 1; j++) {
				if (nums[j] <= pivot) {
					i++;
					
					int temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
			}

			
			int temp = nums[i + 1];
			nums[i + 1] = nums[high];
			nums[high] = temp;

			return i + 1;
		}
	}

	public static class QuickSortPartitionFirst {
		public int[] quickSort(int[] nums) {
			quickSort(nums, 0, nums.length - 1);
			return nums;
		}

		private void quickSort(int[] nums, int low, int high) {
			if (low < high) {
				int pi = partitionFirst(nums, low, high);
				quickSort(nums, low, pi - 1);
				quickSort(nums, pi + 1, high);
			}

		}

		
		private int partitionFirst(int[] list, int first, int last) {
			int pivot = list[first];
			int low = first + 1; 
			int high = last;
			while (low < high) {
				
				while (low <= high && list[low] < pivot)
					low++;
				
				while (low <= high && list[high] >= pivot)
					high--;
				
				if (high > low) {
					int temp = list[high];
					list[high] = list[low];
					list[low] = temp;
				}
			}

			while (high > first && list[high] >= pivot)
				high--;
			
			if (pivot > list[high]) {
				list[first] = list[high];
				list[high] = pivot;
				return high;
			} else {
				return first;
			}
		}
	}
	
	

}
