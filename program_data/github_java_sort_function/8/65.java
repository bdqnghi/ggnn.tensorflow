
public static void quickSort(int[] nums, int left, int right) {
    if (left >= right) {
        return;
    }
    
    int pivot = nums[left];
    int i = left;
    int j = right;
    while (i < j) {
        
        while (nums[j] >= pivot && i < j) {
            j--;
        }
        
        while (nums[i] <= pivot && i < j) {
            i++;
        }
        
        if (i < j) {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
        }
    }

    
    
    nums[left] = nums[i];
    nums[i] = pivot;

    
    quickSort(nums, left, i - 1);
    quickSort(nums, i + 1, right);
}
