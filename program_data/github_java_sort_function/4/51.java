public HeapSort(){
        initHeap(DEFALUT_CAPACITY);
    }

    
    public HeapSort(int capacity){
        initHeap(capacity);
    }

    
    
    
    public HeapSort(Comparable[] array){
        count = array.length;

        data = (E[])new Comparable[count + 1];

        for(int i = 0; i < count; i++)
            data[i + 1] = (E) array[i];

        for(int i = count / 2; i >= 1; i--)
            shiftDown(i);
    }

    
    public void initHeap(int capacity){
        data = (E[])new Comparable[capacity + 1];
        count = 0;
        this.capacity = capacity;
    }

    
    public int size(){
        return count;
    }

    
    public boolean isEmpty(){
        return count == 0;
    }


    
    public boolean add(E e){
        if(e == null)
            throw new NullPointerException();
        checkArrayIndexOutOfBounds();
        
        count ++;
        data[count] = e;
        shiftUp(count);
        return true;
    }

    
    private void shiftUp(int index) {
        E e = data[index];
        
        while(index > 1 && data[index / 2].compareTo(e) < 0){
            data[index] = data[index / 2];
            index /= 2;
        }
        data[index] = e;
    }

    
    public E extractMax(){
        assert count > 0;
        E e = data[1];
        SortUtil.swap(data,1,count);

        count--;
        shiftDown(1);

        return e;
    }

    
    private void shiftDown(int index) {
        E e = data[index];
        while( 2 * index <= count){
            int j = index * 2;
            
            
            if(j + 1 <= count && data[j + 1].compareTo(data[j]) > 0){
                j += 1;
            }

            if(e.compareTo(data[j]) >= 0)
                break;
            data[index] = data[j];
            index = j;
        }

        data[index] = e;
    }


    
    public void checkArrayIndexOutOfBounds(){
        if(count + 1 > capacity)
            throw new ArrayIndexOutOfBoundsException();
    }

    
    public static void sort(Comparable[] array, Integer n){




        HeapSort<Comparable> heapSort = new HeapSort<Comparable>(array);

        for( int i = n-1 ; i >= 0 ; i -- )
            array[i] = heapSort.extractMax();
    }