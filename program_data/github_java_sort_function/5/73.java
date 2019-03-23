public void sort(List<? extends Comparable> list) {
        for (int i = list.size() - 1; i > 0 ; i--) {
            for (int j = 0; j < i; j++) {
                if (needSwap(list.get(j), list.get(j+1))) {
                    swap(list, j, j+1);
                }
            }
        }

    }