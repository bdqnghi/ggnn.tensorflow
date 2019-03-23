    public void sort(T[] arrayToSort) {

        
        this.startTime = System.nanoTime();
        
        this.heap = arrayToSort;
        this.heapSize = this.heap.length;

        setHeap(arrayToSort);
        
        this.heapify();

        this.heapSort();

        
        this.endTime = System.nanoTime();
        
        this.runTime = endTime - startTime;

        
        hsRun.addRuntime(runTime);

    }

    public T[] getHeap() {
        return this.heap;
    }

    public void setHeap(T[] heap) {
        this.heap = heap;
        this.heapSize = this.heap.length;
        this.heapify();
    }

    public void showHeap() {
        System.out.print("Heap = {");
        for (int i = 0; i < this.heapSize; i++) {
            if (i != this.heapSize - 1) {
                System.out.print(this.heap[i] + ", ");
            } else {
                System.out.print(this.heap[i]);
            }
        }
        System.out.println("}\n\n");
    }

    public void heapSort() {

        while (this.heapSize >= 1) {
            int last = this.heapSize - 1;
            T temp = this.heap[0];
            this.heap[0] = this.heap[last];
            this.heap[last] = temp;
            this.heapSize--;
            this.heapify();
            this.heapSort();
            
        }
        
        
        

    }

    
    
    

    private void heapify() {
        int last = this.heapSize - 1;
        int parent = (last - 1) / 2;

        while (parent >= 0) {
            siftDown(parent);
            parent--;
        }
    }

    private void siftDown(int node) {
        while (node < this.heapSize) {
            int leftChild = (2 * node) + 1;
            int rightChild = (2 * node) + 2;

            T root = this.heap[node];
            int max = node;

            if (leftChild < this.heapSize) {
                T left = this.heap[leftChild];
                if (root.compareTo(left) < 0) {
                    max = leftChild;
                }
            }

            if (rightChild < this.heapSize) {
                T right = this.heap[rightChild];
                if (this.elementAtMax(max).compareTo(right) < 0) {
                    max = rightChild;
                }
            }

            if (max == node) {
                return;
            } else {
                T temp = this.heap[node];
                this.heap[node] = this.heap[max];
                this.heap[max] = temp;
                node = max;
            }
        }
    }

    private T elementAtMax(int max) {
        return this.heap[max];
    }
