    private void merge(int[] arr, int left, int mid, int right) {
            int lIdx = left;
            int rIdx = mid+1;
            int idx = left;
            int[] sortArr = new int[arr.length];
            
            while(lIdx <= mid && rIdx <= right) {
                while(lIdx <= mid && arr[lIdx] <= arr[rIdx]) {
                    sortArr[idx++] = arr[lIdx++]; 
                }
                
                while(rIdx <= right && arr[rIdx] < arr[lIdx]) {
                    sortArr[idx++] = arr[rIdx++];
                }
            }
            
            if(lIdx <= mid) {
                for(int i=lIdx; i<=mid; i++) {
                    sortArr[idx++] = arr[i];
                }
            } else {
                for(int i=rIdx; i<=right; i++) {
                    sortArr[idx++] = arr[i]; 
                }
            }
            
            for(int i=left; i<=right; i++) {
                arr[i] = sortArr[i];
            }
        }
        
        private void mergeSort(int[] arr, int left, int right) {
            if(left < right) {
                int mid = (left+right)/2;
                mergeSort(arr, left, mid);
                mergeSort(arr, mid+1, right);
                merge(arr, left, mid, right);
            }
        }