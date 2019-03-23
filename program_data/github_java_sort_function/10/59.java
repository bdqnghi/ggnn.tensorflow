  private static double[] bucketSort(double[] array) {
        double max = array[0];
        double min = array[0];
        for (int i = 1; i < array.length; i++) {
            if (array[i] > max) max = array[i];
            if (array[i] < min) min = array[i];
        }
        double d = max - min;

        int bucketNum = array.length;

        ArrayList<LinkedList<Double>> bucketList = new ArrayList<>(bucketNum);

        for (double ignored : array) bucketList.add(new LinkedList<>());
        for (double anArray : array) {
            int num = (int) ((anArray - min) * (bucketNum - 1) / d);
            bucketList.get(num).add(anArray);
        }
        bucketList.forEach(Collections::sort);

        double[] sortedArray = new double[array.length];
        int index = 0;

        for (LinkedList<Double> list : bucketList)
            for (double element : list) {
                sortedArray[index] = element;
                index++;
            }

        return sortedArray;
    }
