 public static <T extends Comparable<? super T>> void sort(T[] input) {
        if (input == null || input.length < 2) {
            return;
        }

        int inc = input.length / 2;
        while (inc > 0) {
            for (int ii = inc; ii < input.length; ii++) {
              count();
                T temp = input[ii];
                int jj = ii;
                while (jj >= inc && input[jj - inc].compareTo(temp) > 0) {
                    input[jj] = input[jj - inc];
                    jj -= inc;
                }
                input[jj] = temp;
            }
            
            inc = inc == 2 ? 1 : inc * 5 / 11;
        }
    }
    