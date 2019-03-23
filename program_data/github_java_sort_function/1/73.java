private int[] ascend_insert(int x, int[] L)
    {
        if (L.length == 0)
        {
            return new int[]{x};
        }
        else if (x <= L[0])
        {
            int[] result = new int[L.length+1];
            result[0] = x;
            for (int i=0; i<L.length; i++)
            {
                result[i+1] = L[i];
            }
            return result;
        }
        else
        {
            int[] combine = ascend_insert(x, rest(L));
            int[] result = new int[L.length+1];
            result[0] = L[0];
            for (int i=0; i<combine.length; i++)
            {
                result[i+1] = combine[i]; 
            }
            return result;
        }
    }