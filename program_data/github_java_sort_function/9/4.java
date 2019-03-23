    public static int[] sort(int[] list){
        if (list == null || list.length < 2)
            return null;

        int indexOfMin; 
        for (int i = 0; i < list.length - 1; i++){
            indexOfMin = i;
            
            for (int j = i + 1; j < list.length; j++){
                if (list[j] < list[indexOfMin])
                    indexOfMin = j;
            }
            
            if (i != indexOfMin && list[i] != list[indexOfMin]){
                int temp = list[i];
                list[i] = list[indexOfMin];
                list[indexOfMin] = temp;
            }
        }
        
        return list;
    }
