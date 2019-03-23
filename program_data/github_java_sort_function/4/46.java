 public static int compare(String a, String b){
        if(a.length() < b.length())
            return -1;
        else if(a.length() > b.length())
            return 1;
        else
            return a.compareTo(b);
    }


    public static int left(int i){
        return 2 * i + 1;
    }

    public static int right(int i){
        return 2 * i + 2;
    }

    public static int parent(int i){
        return (i + 1) / 2 - 1;
    }

    public static void max_heapify(String[] A, int i){
        int largest = i;
        int l = left(i);
        int r = right(i);
        String tmp;
        if(l < heapSize && compare(A[l], A[i]) > 0)
            largest = l;
        if(r < heapSize && compare(A[r], A[largest]) > 0)
            largest = r;
        if(largest != i){
            tmp = A[largest];
            A[largest] = A[i];
            A[i] = tmp;
            max_heapify(A, largest);
        }
    }

    public static void build_max_heap(String[] A){
        for(int i = A.length / 2 - 1; i >=0; i--){
            max_heapify(A, i);
        }
    }

    public static void heap_sort(String[] A){
        String tmp;

        heapSize = A.length;
        build_max_heap(A);

        for(int i = A.length - 1; i >= 1; i--){
            
            tmp = A[i];
            A[i] = A[0];
            A[0] = tmp;
            heapSize --;
            max_heapify(A, 0);
        }
    }