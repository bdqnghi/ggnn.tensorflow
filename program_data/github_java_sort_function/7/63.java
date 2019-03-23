 public <T> void sort(T[] values, Comparator<? super T> c) {
        if (values != null && values.length > 1) {
            
            int gap = 1;
            while (gap <= Math.ceil(values.length / 3)) {
                gap *= 3 + 1;
            }

            while (gap > 0) {
                
                for (int i = gap; i < values.length; ++i) {
                    T temp = values[i];
                    int j = i;
                    while (j >= gap && c.compare(values[j - gap], temp) > 0) {
                        values[j] = values[j - gap];
                        j -= gap;
                    }
                    values[j] = temp;
                }
                gap /= 3;
            }
        }
    }