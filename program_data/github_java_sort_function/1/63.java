public static void insertSort(int[] arr) {
        // 认为第一个元素已经有序，从第二个元素开始取值插入已经有序的部分
        for (int i = 1; i < arr.length; i++) {
            // 待插入的元素
            int key = arr[i];
            // 待插入的位置下标
            int index = i;
            // 从后向前遍历数组已经有序的部分，寻找合适的插入位置
            for (int j = i - 1; j >= 0; j--) {
                // 如果待插入的元素较小，则将较大的元素依次向后移动，空出合适的插入位置
                if (arr[j] > key) {
                    // 因为arr[j+1]=arr[i]=key，该元素已经临时存储在了key中，所以不会出现数据丢失
                    arr[j + 1] = arr[j];
                    // 记录下该位置的下标
                    index = j;
                } else {
                    // 找到了合适的插入位置，则退出这个循环，开始取下一个元素，直到取完所有元素
                    break;
                }
            }
            // 将该元素插入到合适的位置
            arr[index] = key;
        }
    }