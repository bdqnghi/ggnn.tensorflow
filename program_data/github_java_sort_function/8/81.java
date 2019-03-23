 public void sort(Object[] arr, Comparator comparator) {
        
        shuffleArray(arr);
        sort(arr, 0, arr.length - 1, comparator);
    }

    static void shuffleArray(Object[] arr)
    {
        Random rnd = ThreadLocalRandom.current();
        for (int i = arr.length - 1; i > 0; i--)
        {
            int index = rnd.nextInt(i + 1);

            Object a = arr[index];
            arr[index] = arr[i];
            arr[i] = a;
        }
    }

    private void sort(Object[] arr, int low, int high, Comparator c)
    {
        if (low >= high)
        {
            return;
        }

        int j = partition(arr, low, high, c);
        sort(arr, low, j - 1, c);
        sort(arr, j + 1, high, c);
    }

    private int partition(Object[] a, int low, int high, Comparator c)
    {
        int i = low;
        int j = high + 1;

        while (true)
        {
            while (less(c, a[++i], a[low]))
            {
                if (i == high)
                {
                    break;
                }
            }

            while (less(c, a[low], a[--j]))
            {
                if (j == low)
                {
                    break;
                }
            }

            if (i >= j)
            {
                break;
            }

            exchange(a, i, j);
        }

        exchange(a, low, j);

        return j;
    }