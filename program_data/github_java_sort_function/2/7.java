 static int[] mergeSort(int[] a){
        int n = a.length;
        int[] left;
        int[] right;

        if(n % 2 == 0){
            left  = new int[n / 2];
            right = new int[n / 2];
        } else {
            left  = new int[n / 2];
            right = new int[n / 2 + 1];
        }

        for(int i = 0; i < n; i++){
            if(i < n/2){
                left[i] = a[i];
            } else {
                right[i - n/2] = a[i];
            }
        }

        left = mergeSort(left);
        right = mergeSort(right);

        return merge(left, right);

    }

    static int[] merge(int[] left, int[] right){
        int[] result = new int[left.length + right.length];
        
        int i = 0;
        int j = 0;
        int index = 0;

        while(i < left.length && j < right.length){
            if(left[i] < right[i]){
                result[index++] = left[i++];
            } else {
                result[index++] = right[j++];
            }
        }

        while(i < left.length){
            result[index++] = left[i++];
        }

        while (j < right.length) {
            result[index++] = right[j++];
        }
        
        return result;
    }