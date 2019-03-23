public void sort(int[] listToSort){
        if(listToSort == null || listToSort.length == 0){
            return;
        }
        this.listToSort = listToSort;
        heapSize = listToSort.length;
        
        
        buildMaxHeap();
        
        
        while(heapSize > 1){
             
            swap(0,--heapSize);
            
            
            
            heapify(0);
        }
        
        
        System.out.println("Sorted Array using Heap Sort");
        for(int num : listToSort){
            System.out.print(num + " ");
        }
    }
    
    
    private void heapify(int nodeIndex){
        
        int index = nodeIndex;
        int leftChildIndex = 2*index + 1;
        int rightChildIndex = 2*index + 2;
        int swapWithIndex = -1;
        
        System.out.println("index=" + index + ", leftChildIndex=" + leftChildIndex +
                ", rightChildIndex=" + rightChildIndex);
        
        if(index <= heapSize - 1 
            && 
        (leftChildIndex <= heapSize - 1 || rightChildIndex <= heapSize -1)){
            
            swapWithIndex = findSwapWithIndex(index, leftChildIndex, rightChildIndex);
            
            if(swapWithIndex > -1){
                swap(index, swapWithIndex);
                heapify(swapWithIndex);
            }   
        }
    }
    
    private void buildMaxHeap(){
        
        int leftChildIndex = 0;
        int rightChildIndex = 0;
        int swapWithIndex = -1;
        for(int i = (heapSize/2)-1; i >= 0; i--){
            
            swapWithIndex = -1;
            
            leftChildIndex = 2*i + 1;
            
            rightChildIndex = 2*i + 2;
            
            swapWithIndex = findSwapWithIndex(i, leftChildIndex, rightChildIndex);
            
            if(swapWithIndex > -1){
                swap(i, swapWithIndex);
            }
        }
        System.out.println("Printing max-heap for size: " + heapSize);
        printAsHeap();
    }
    
    private int findSwapWithIndex(int nodeIndex, 
                            int leftChildIndex,
                            int rightChildIndex){
        
        int swapWithIndex = -1;
        
        if(rightChildIndex <= heapSize - 1){
            
            if(listToSort[nodeIndex] < listToSort[leftChildIndex] 
                || 
                listToSort[nodeIndex] < listToSort[rightChildIndex]){
                
                if(listToSort[rightChildIndex] >= listToSort[leftChildIndex]){
                    swapWithIndex = rightChildIndex;
                }else{
                    swapWithIndex = leftChildIndex;
                }
            }
            
        }else{
            
            if(listToSort[nodeIndex] < listToSort[leftChildIndex]){
                swapWithIndex = leftChildIndex;
            }
        }
        
        return swapWithIndex;
    }
    
    private void swap(int swapFromIndex, int swapWithIndex){
        
        System.out.println("swapFrom[" + swapFromIndex + "], swapWith[" + swapWithIndex + "]");
        
        int temp = listToSort[swapFromIndex];
        listToSort[swapFromIndex] = listToSort[swapWithIndex];
        listToSort[swapWithIndex] = temp;
    }
    
    private void printAsHeap(){
        int index = 0;
        int level = 1;
        int itemIndex = 0;
        
        while(itemIndex < listToSort.length){
            for(int i=index; i<(index+level) && itemIndex < listToSort.length; i++){                
                System.out.print(" " + listToSort[itemIndex]);              
                itemIndex++;
            }
            System.out.println();
            index += level;
            level = level*2;
        }
    }
    
    private int heapDepth(int heapSize){
        int heapDepth = 0;
        int level = 1;
        while(heapSize > 0){
            heapSize = heapSize - level;
            heapDepth++;
            level = level*2;
        }
        
        
        
        return heapDepth;
    }
    