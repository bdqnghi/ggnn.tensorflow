   public List<E> sort(final List<E> listToSort) {

        if (listToSort.size() == 0 || listToSort.size() == 1) {
            return listToSort;
        }

        workingList = new ArrayList<>(listToSort);
        List<E> newList = new ArrayList<>();

        while (workingList.size() > 0) {
            int minimumIndex = getMinimumIndex();

            newList.add(workingList.get(minimumIndex));
            workingList.remove(minimumIndex);
        }

        return newList;
    }

    private int getMinimumIndex() {
        int minimumIndex = 0;

        for (int i = 0; i < workingList.size(); i++) {
            if (workingList.get(minimumIndex).compareTo(workingList.get(i)) == 1) {
                minimumIndex = i;
            }
        }

        return minimumIndex;
    }