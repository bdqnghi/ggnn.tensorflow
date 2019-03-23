
    public void heapSort(int[] a) {
        buildMaxHeap(a);
        int length = a.length;
        for (int i = a.length - 1; i >= 1; i--) {
            swap(a, i, 0);
            length--;
            maxHeapify(a, 0, length);
        }
    }

    private void buildMaxHeap(int a[]) {
        for (int i = a.length / 2 + 1; i >= 0; i--) {
            maxHeapify(a, i);
        }
    }

    
    private void maxHeapify(int[] a, int i, int length) {
        int l = left(i);
        int r = right(i);
        int max;
        if (l < length && a[l] > a[i]) {
            max = l;
        } else {
            max = i;
        }
        if (r < length && a[r] > a[max]) {
            max = r;
        }
        if (max != i) {
            swap(a, i, max);
            maxHeapify(a, max, length);
        }
    }

    private void maxHeapify(int[] a, int i) {
        maxHeapify(a, i, a.length);
    }

    private int left(int i) {
        return i * 2 + 1;
    }

    private int right(int i) {
        return i * 2 + 2;
    }

    private int parent(int i) {
        return (i + 1) / 2 - 1;
    }

    private void swap(int[] a, int i, int j) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    
    public int maximum() {
        return a[0];
    }

    public int extractMax() {
        int max = a[0];
        a[0] = a[a.length - 1];
        int[] newA = new int[a.length - 1];
        System.arraycopy(a, 0, newA, 0, newA.length);
        maxHeapify(newA, 0, newA.length);
        return max;
    }

    public void heapIncreaseKey(int i, int key) {
        if (key > a[i]) {
            a[i] = key;
            while (i > 0 && a[parent(i)] < a[i]) {
                swap(a, parent(i), i);
                i = parent(i);
            }
        } else {
            throw new IllegalArgumentException("key is too small");
        }
    }

    public void maxHeapInsert(int key) {
        int[] newA = new int[a.length + 1];
        System.arraycopy(a, 0, newA, 0, a.length);
        newA[newA.length - 1] = Integer.MIN_VALUE;
        this.a = newA;
        heapIncreaseKey(a.length - 1, key);
    }

