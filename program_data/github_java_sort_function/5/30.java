  private static void sortImpl(Object data, Comparator comparator) {
        int length = Array.getLength(data);
        if (length <= 1) return;

        for (int i = 0; i < length; i++) {
            boolean swap = false;
            for (int j = 0; j < length - i - 1; j++) {
                swap |= swap(data, j, j + 1, comparator);
            }

            if (!swap) { 
                break;
            }
        }
    }

    