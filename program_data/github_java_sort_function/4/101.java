    void maxHeapify(Integer A[], Integer i) {
        int l = left(i);
        int r = right(i);
        int largest;

        if (l <= heapSize && A[l - 1] > A[i - 1]) {
            largest = l;
        } else {
            largest = i;
        }

        if (r <= heapSize && A[r - 1] > A[largest - 1]) {
            largest = r;
        }

        if (largest != i) {
            int temp = A[i - 1];
            A[i - 1] = A[largest - 1];
            A[largest - 1] = temp;
            maxHeapify(A, largest);
        }
    }

    void maxHeapifyIterative(Integer A[], Integer i) {

        while (true) {
            int l = left(i);
            int r = right(i);
            int largest;

            if (l <= heapSize && A[l - 1] > A[i - 1]) {
                largest = l;
            } else {
                largest = i;
            }

            if (r <= heapSize && A[r - 1] > A[largest - 1]) {
                largest = r;
            }

            if (largest != i) {
                int temp = A[i - 1];
                A[i - 1] = A[largest - 1];
                A[largest - 1] = temp;

                i = largest;

            } else {
                return;
            }
        }

    }

    void minHeapify(Integer A[], Integer i) {
        int l = left(i);
        int r = right(i);
        int smallest;

        if (l <= heapSize && A[l - 1] < A[i - 1]) {
            smallest = l;
        } else {
            smallest = i;
        }

        if (r <= heapSize && A[r - 1] < A[smallest - 1]) {
            smallest = r;
        }

        System.out.println("smallest is " + A[smallest - 1]);

        if (smallest != i) {
            int temp = A[i - 1];
            A[i - 1] = A[smallest - 1];
            A[smallest - 1] = temp;
            minHeapify(A, smallest);
        }
    }

    void buildMaxHeap(Integer[] A) {
        this.heapSize = A.length;

        for (int i = (int) Math.floor(A.length / 2); i >= 1; i--) {
            maxHeapify(A, i);
        }
    }

    void heapSort(Integer[] A) {

        buildMaxHeap(A);

        for (int i = A.length; i >= 2; i--) {
            int temp = A[0];
            A[0] = A[i - 1];
            A[i - 1] = temp;
            this.heapSize--;
            maxHeapify(A, 1);
        }
    }
