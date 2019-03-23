public static void sort(long[] valuesArray, int[] gapsArray) throws SortException {

        if(gapsArray.length == 0) throw new EmptyArrayException("Gaps array can not by empty");

        int endGap = gapsArray[gapsArray.length-1];
        if(endGap != 1) throw new InvalidGapSequenceException("Gaps sequence must end with 1");


        int valuesArraySize = valuesArray.length;

        for (int gap : gapsArray) {

            for (int i = gap; i < valuesArraySize; i++) {

                long value = valuesArray[i];
                int j = i;

                while (j >= gap && valuesArray[j - gap] > value) {
                    valuesArray[j] = valuesArray[j - gap];
                    j -= gap;
                }

                valuesArray[j] = value;
            }
        }
    }