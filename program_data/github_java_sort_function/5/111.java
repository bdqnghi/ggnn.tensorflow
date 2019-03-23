public static void sort(int[] arr)
    {
        boolean sorted;
        int len = arr.length;
        for (int i = 1; i < len - 1; i++)
        {
            sorted = true;
            for (int j = 0; j < len - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                    sorted = false;
                }
            }
            if (sorted)
            {
                break;
            }
            System.out.println(Arrays.toString(arr));
        }
    }