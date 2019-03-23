 public void sort(int a[]) {

        if(a == null || a.length <= 1) {
            return;
        }

        insertNumberAtIndexInSortedArray(a, 1);
    }

    private void insertNumberAtIndexInSortedArray(int a[], int index) {

        if (index == a.length) {
            return;
        }

        int number = a[index];
        int i;
        for (i=index-1; i >= 0; i--) {
            if (number < a[i]) {
                a[i+1] = a[i];
            } else {
                break;
            }
        }

        a[i+1] = number;

        insertNumberAtIndexInSortedArray(a, index+1);
    }
