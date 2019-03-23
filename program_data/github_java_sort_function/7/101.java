public static void Sort(Integer[] data, Integer[] gaps)
    {
        for (Integer gap : gaps){
            
            for (Integer i = gap; i < data.length; i++){
                Integer temp = data[i];
                Integer j = i;
                for (; j >= gap && data[j - gap] > temp; j -= gap)
                {
                    data[j] = data[j - gap];
                }
                data[j] = temp;
            }
        }
    }