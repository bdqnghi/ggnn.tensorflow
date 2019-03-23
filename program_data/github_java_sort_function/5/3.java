  public static void sort(double... array) {
        boolean wasChanged = false;
        do {
            wasChanged = false;
            for (int i = 1; i < array.length; i++) {
                if (array[i - 1] > array[i]) {
                    swapElements(i -1, i, array);
                    wasChanged = true;
                }
            }
        } while (wasChanged);
    }

    public static void swapElements(int i, int j, double... array) {
        double temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }