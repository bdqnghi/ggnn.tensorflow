public void sort(Object[] arr, Comparator comparator)
    {
        for (int i = 0; i < arr.length; i++)
        {
            int min = i;
            for (int j = i + 1; j < arr.length; j++)
            {
                if (less(comparator, arr[j], arr[min]))
                {
                    min = j;
                }
            }

            exchange(arr, i, min);
        }
    }