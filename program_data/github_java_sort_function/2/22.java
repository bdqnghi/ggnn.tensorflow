   public void sort(Object[] arr, Comparator comparator)
    {
        int low = 0;
        int high = arr.length - 1;

        Object[] aux = new Object[arr.length];

        sort(comparator, arr, aux, low, high);
    }

    private void sort(Comparator c, Object[] arr, Object[] aux, int low, int high)
    {
        if (high <= low)
        {
            return;
        }

        int mid = low + (high - low) / 2;
        sort(c, arr, aux, low, mid);
        sort(c, arr, aux, mid + 1, high);

        if (!less(c, arr[mid + 1], arr[mid]))
        {
            return;
        }

        merge(c, arr, aux, low, mid, high);
    }

    private void merge(Comparator c, Object[] arr, Object[] aux, int low, int mid, int high)
    {
        assert isSorted(c, arr, low, mid);
        assert isSorted(c, arr, mid + 1, high);

        for (int k = low; k <= high; k++)
        {
            aux[k] = arr[k];
        }

        int i = low;
        int j = mid + 1;

        for (int k = low; k <= high; k++)
        {
            if (i > mid)
            {
                arr[k] = aux[j++];
            }
            else if (j > high)
            {
                arr[k] = aux[i++];
            }
            else if (less(c, aux[j], aux[i]))
            {
                arr[k] = aux[j++];
            }
            else
            {
                arr[k] = aux[i++];
            }
        }

        assert isSorted(c, arr, low, high);
    }

    private Boolean isSorted(Comparator c, Object[] arr, int low, int high)
    {
        for (int i = low + 1; i <= high; i++)
        {
            if (less(c, arr[i], arr[i - 1]))
            {
                return false;
            }
        }

        return true;
    }