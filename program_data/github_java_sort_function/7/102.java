package Sort_func.arraySort.arraySort;


public class ShellSort {

    public void ShellSort(int[] nums){
        int gap = nums.length/2;
        while(gap > 0){
            for(int i=gap; i<nums.length; i++){
                for(int j=i; j>=gap; j-=gap){
                    if(nums[j] < nums[j-gap])
                        swap(nums, j, j-gap);
                    else
                        break;
                }
            }
            gap = gap/2;
        }
    }

    public void swap(int[] nums, int i, int j){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
}
