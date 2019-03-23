 public Comparable[] sort() {
        int lenght = collection.length;
        int increment = 1;

        while (increment < lenght / 2) {
            increment = 3 * increment + 1;
        }

        while (increment >= 1) {
            for (int i = increment; i < lenght; i++) {
                for (int j = i; j >= increment; j -= increment) {
                    if (less(collection[j], collection[j - increment])) {
                        exchange(collection, j, j - increment);
                    } else {
                        break;
                    }
                }
            }
            increment = increment / 3;
        }
        return collection;
    }