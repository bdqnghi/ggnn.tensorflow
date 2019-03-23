  public static <T extends Comparable<T>> void sort(List<T> itemsToSort) {
        for (int i = 0; i < itemsToSort.size(); i++) {
            for (int j = itemsToSort.size() - 1; j > 0; j--) {
                T secondItem = itemsToSort.get(j);
                T firstItem = itemsToSort.get(j - 1);

                if (secondItem.compareTo(firstItem) < 0) {
                    itemsToSort.set(j, firstItem);
                    itemsToSort.set(j - 1, secondItem);
                }
            }
        }
    }