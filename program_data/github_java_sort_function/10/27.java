  public void bucketSort(int[] nums) {
        if (nums == null || nums.length == 0) {
            return;
        }
        
        
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        
        
        int [] bucket = new int[max + 1];

        
        for (int i = 0; i < bucket.length; i++) {
            bucket[i] = 0;
        }

        
        for (int i = 0; i < nums.length; i++) {
            bucket[nums[i]]++;
        }

        
        int index = 0;
        for (int i = 0; i < bucket.length; i++) {
            for (int j = 0; j < bucket[i]; j++) {
                nums[index++] = i;
            }
        }
    }
    