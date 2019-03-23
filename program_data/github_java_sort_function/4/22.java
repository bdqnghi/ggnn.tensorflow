     int n = arr.length;
        
        
        
        
        for (int i = (n - 1 - 1) / 2; i >= 0; i--) {
            
            shiftDown(arr, n, i);
        }
        
        for (int j = n - 1; j > 0; j--) {
            SortTestHelper.swap(arr, 0, j);
            shiftDown(arr, j, 0);
        }
    }

    
    private static void shiftDown(Comparable[] arr, int n, int i) {
        
        while (i * 2 + 1 < n) {
            
            int j = i * 2 + 1;
            
            if (j + 1 < n && arr[j + 1].compareTo(arr[j]) > 0) {
                j += 1;
            }
            
            if (arr[i].compareTo(arr[j]) >= 0) {
                break;
            }
            SortTestHelper.swap(arr, i, j);
            i = j;
        }