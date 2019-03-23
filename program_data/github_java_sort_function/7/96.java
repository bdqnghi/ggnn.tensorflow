
    public void sort(Object[] a, Comparator comparator)
    {
        int h = 1;

        while (h / a.length < 3)
        {
            h = (h * 3) + 1;
        }

        while (h >= 1)
        {
            for (int i = h; i < a.length; i++)
            {
                for (int j = i; j >= h; j -= h)
                {
                    if (less(comparator, a[j], a[j - h]))
                    {
                        exchange(a, j, j - h);
                    }
                    else
                    {
                        break;
                    }
                }
            }

            h--;
            h /= 3;
        }
    }