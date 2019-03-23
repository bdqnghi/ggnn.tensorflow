    public Heapsort(final Integer v, final Integer o, final Integer bc, final Integer sc, final Integer st, final Studentdetails[] a, final int n) {
        this.vac = v;
        this.open = o;
        this.bc = bc;
        this.sc = sc;
        this.st = st;
        this.array = a;
        this.size = n;
    }
    
    public Studentdetails[] sort() {
        for (int i = (size / 2) - 1; i >= 0; i--) {
            heapify(size, i);
        }
        for (int i = size - 1; i >= 0; i--) {
            swap(0, i);
            heapify(i, 0);
        }
        return array;
    }
    
    public void swap(final int i, final int j) {
        Studentdetails temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    public void heapify(final int n, final int i) {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && array[l].compareTo(array[largest]) < 0) {
            largest = l;
        }
        if (r < n && array[r].compareTo(array[largest]) < 0) {
            largest = r;
        }
        if (largest != i) {
            swap(i, largest);
            heapify(n, largest);
        }
    }