
    public static <T extends Comparable<T>> List<T> heapSort(List<T> list, int n){
        if(n <= 0){
            return new ArrayList<T>();
        }
        
        List<T> heapSortList = new ArrayList<T>();
        heapSortList.add(null);
        for(T item : list){
            if(heapSortList.size() < n+1){
                
                heapSortList.add(item);
                int index = heapSortList.size()/2;
                while(true){
                    int leftChildIndex = index*2;
                    int rightChildIndex = index *2 + 1;
                    int minIndex = getMinIndex(heapSortList, index, leftChildIndex, rightChildIndex);
                    if(minIndex == index || index == 1){
                        break;
                    }else{
                        index = index/2;
                    }
                }
            }else{
                
                T minItem = heapSortList.get(1);
                if(minItem.compareTo(item) < 0){
                    heapSortList.set(1, item);
                }
                int index = 1;
                while(true){
                    int leftChildIndex = index*2;
                    int rightChildIndex = index *2 + 1;
                    int minIndex = getMinIndex(heapSortList, index, leftChildIndex, rightChildIndex);
                    if(minIndex == index){
                        break;
                    }else{
                        index = minIndex;
                    }
                }
            }
        }
        
        
        List<T> resultList = new ArrayList<T>();
        while(heapSortList.size() > 1){
            resultList.add(heapSortList.get(1));
            if(heapSortList.size() == 2){
                break;
            }
            heapSortList.set(1, heapSortList.remove(heapSortList.size() -1));
            
            int index = 1;
            while(true){
                int leftChildIndex = index*2;
                int rightChildIndex = index *2 + 1;
                int minIndex = getMinIndex(heapSortList, index, leftChildIndex, rightChildIndex);
                if(minIndex == index){
                    break;
                }else{
                    index = minIndex;
                }
            }
        }

        
        Collections.reverse(resultList);
        return resultList;
    }
    
    
    private static <T extends Comparable<T>> int getMinIndex(List<T> heapSortList, int index, int leftChildIndex, int rightChildIndex){
        int minIndex = index;
        
        T minItem = heapSortList.get(minIndex);
        if(leftChildIndex < heapSortList.size()){
            T leftChildItem = heapSortList.get(leftChildIndex);
            if(minItem.compareTo(leftChildItem) >  0){
                minIndex = leftChildIndex;
                minItem = leftChildItem;
            }
        }
        
        if(rightChildIndex < heapSortList.size()){
            T rightChildItem = heapSortList.get(rightChildIndex);
            if(minItem.compareTo(rightChildItem) >  0){
                minIndex = rightChildIndex;
                minItem = rightChildItem;
            }
        }