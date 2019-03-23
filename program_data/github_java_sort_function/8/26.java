    private void quickSortAlgWithRd(int[] numbers, int left, int right) {
        if (left < right) {
            
            int index = (int) (Math.random() * (right - left + 1) + left);
            int flag = numbers[index];
            int i = left;
            int j = right;
            int k = index;
            while (i < j) {
                
                while (j > i && numbers[j] > flag) j--;
                
                while (i < j && numbers[i] <= flag) i++;
                numbers[k] = numbers[j];
                numbers[j] = numbers[i];
                k = i;
            }
            
            numbers[k] = flag;
            quickSortAlgWithRd(numbers, left, k - 1);
            quickSortAlgWithRd(numbers, k + 1, right);
        }
    }

    
    private void quickSortAlgFromLeft(int[] numbers, int left, int right) {
        if (left < right) {
            int flag = numbers[left]; 
            int i = left;
            int j = right;
            while (i < j) {
                while (j > i && numbers[j] > flag) j--;
                if (j > i) numbers[i++] = numbers[j];
                while (i < j && numbers[i] <= flag) i++;
                if (i < j) numbers[j--] = numbers[i];
            }
            numbers[i] = flag;
            quickSortAlgFromLeft(numbers, left, i - 1);
            quickSortAlgFromLeft(numbers, i + 1, right);
        }
    }

    
    private void quickSortAlgFromRight(int[] numbers, int left, int right) {
        if (left < right) {
            int flag = numbers[right];
            int i = left;
            int j = right;
            while (i < j) {
                while (i < j && numbers[i] <= flag) i++;
                if (i < j) numbers[j--] = numbers[i];
                while (j > i && numbers[j] > flag) j--;
                if (j > i) numbers[i++] = numbers[j];
            }
            numbers[j] = flag;
            quickSortAlgFromRight(numbers, left, j - 1);
            quickSortAlgFromRight(numbers, j + 1, right);
        }
    }
