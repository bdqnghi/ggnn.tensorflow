 public static void sort(Comparable[] somearray, int numberused)
    {
        int index, indexOfNextSmallest;
        for(index = 0; index < numberused - 1; index++)
        {
            indexOfNextSmallest = indexOfSmallest(index, somearray, numberused);
            interchange(index, indexOfNextSmallest, somearray);

        }
    }

    private static int indexOfSmallest(int startIndex, Comparable[] somearray, int numberused)
    {
        Comparable min = somearray[startIndex];
        int indexOfMin = startIndex;
        int index;

        for(index = startIndex + 1; index < numberused; index++)
        {
            if(somearray[index].compareTo(min) < 0)
            {
                min = somearray[index];
                indexOfMin = index;
            }
        }

        return indexOfMin;
    }

    private static void interchange(int i, int j, Comparable[] somearray)
    {
        Comparable temp;
        temp = somearray[i];
        somearray[i] = somearray[j];
        somearray[j] = temp;
    }