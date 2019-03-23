public int removeMin() {
        if(this.heap == null || this.heap.size() == 0) throw new IllegalStateException();
        
        int toReturn = this.heap.get(0);
        
        
        swap(0, this.heap.size()-1);
        
        
        this.heap.remove(this.heap.size()-1);
        
        
        this.heapifyDown(0);
        
        return toReturn;
    }
    private void heapifyDown(int parentIndex) {
        if(parentIndex < 0 || parentIndex >= this.heap.size()) return;
        
        int childIndex1 = parentIndex * 2 + 1;
        int childIndex2 = parentIndex * 2 + 2;
        
        
        
        if(childIndex1 < this.heap.size() && this.heap.get(childIndex1) < this.heap.get(parentIndex) && 
                (childIndex2 >= this.heap.size() || this.heap.get(childIndex1) <= this.heap.get(childIndex2))) {
            this.swap(childIndex1, parentIndex);
            heapifyDown(childIndex1);
        } 
        else if(childIndex2 < this.heap.size() && this.heap.get(childIndex2) < this.heap.get(parentIndex) && this.heap.get(childIndex2) <= this.heap.get(childIndex1)) {
            this.swap(childIndex2, parentIndex);
            heapifyDown(childIndex2);
        }
    }
    
    public void add(int toAdd) {
        
        heap.add(toAdd);
        heapifyUp(heap.size()-1);
    }

    
    private void heapifyUp(int index) {
        if(index == 0) return;
        
        
        int parentIndex = (index-1)/2;
        int parentVal = heap.get(parentIndex);
        int childVal = heap.get(index);
        
        if(parentVal > childVal) {
            swap(parentIndex, index);
            heapifyUp(parentIndex);
        }
    }

    private void swap(int i, int j) {
        int temp = this.heap.get(i);
        this.heap.set(i, this.heap.get(j));
        this.heap.set(j, temp);
    }