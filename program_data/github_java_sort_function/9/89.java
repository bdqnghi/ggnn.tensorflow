protected <T extends Comparable<T>> void sort(Sortable<T> input) {
        
        for (int i = 0; i < input.length(); i++) {
            int min = i;
            for (int j = i + 1; j < input.length(); j++) {
                if (input.lessOrEqual(j, min)) {
                    min = j;
                }
            }
            if (min != i) {
                input.swap(min, i);
            }
        }
    }