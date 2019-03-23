  public void sort(Object[] a, Comparator comparator)
    {
        for (int i = 1; i < a.length; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                if (less(comparator, a[j], a[j - 1]))
                {
                    exchange(a, j, j - 1);
                }
                else
                {
                    break;
                }
            }
        }
    }
