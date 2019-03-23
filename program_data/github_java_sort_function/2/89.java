public static void sort(Comparable[] data){
        long start = System.nanoTime();
        int len = data.length-1;
        mergeSort(data,0,len);
        long end = System.nanoTime();
        System.out.println("\nMergeSort Execute time:"+(end-start));
    }

    private static void mergeSort(Comparable[] data, int begin, int end) {
        if(begin<end){
            int mid = (begin+end)/2;
            mergeSort(data, begin, mid);
            mergeSort(data, mid+1, end);
            merge(data,begin,mid,end);
        }
    }

    private static void merge(Comparable[] data, int begin, int mid, int end) {
        int leftIndex = begin;
        int rightIndex = mid+1;
        Comparable[] tmp = new Comparable[end-begin+1];
        int tmpIndex = 0;
        while (leftIndex<=mid && rightIndex<=end) {
            if(data[leftIndex].compareTo(data[rightIndex])>0)
            {
                tmp[tmpIndex] = data[rightIndex];
                rightIndex++;
            }else{
                tmp[tmpIndex] = data[leftIndex];
                leftIndex++;
            }
            tmpIndex++;         
        }
        while(leftIndex<=mid){
            tmp[tmpIndex]=data[leftIndex];
            tmpIndex++;
            leftIndex++;
        }
        while(rightIndex<=end){
            tmp[tmpIndex]=data[rightIndex];
            tmpIndex++;
            rightIndex++;
        }
        for(int i=0;i<tmpIndex;i++)
        {
            data[begin+i] = tmp[i];
        }
    }