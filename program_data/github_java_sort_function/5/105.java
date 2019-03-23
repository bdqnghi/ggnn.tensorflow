public void bubbleSort(T[] values) {
        for (int i = (values.length - 1); i > 0; i--) {
            for (int j = 0; j < i; j++) {
                
                if (values[j].compareTo(values[j + 1]) > 0) {
                    T temp = values[j];
                    values[j] = values[j + 1];
                    values[j + 1] = temp;
                }
            }
        }
    }
