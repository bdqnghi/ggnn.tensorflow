  
    public int[] sort(int[] list) {
        for(int gap: gaps) {
            for (int i = gap; i < list.length; i+=1) {
                int j = i;
                int current = list[i];
                for (; j >= gap && list[j-gap] > current; j-=gap) {
                    list[j] = list[j-gap];
                }
                list[j] = current;
            }
        }
        return list;
    }