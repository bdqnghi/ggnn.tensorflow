public Comparable[] sort(Comparable[] array) {
        for (int i = 0; i < array.length ; i ++){
            int temp = i;
            for (int j = i + 1; j < array.length; j ++){
                if (fistGtSecond(array[temp], array[j])){
                    temp = j;
                }
            }

            if (temp != i){
                swap(array, i, temp);
            }
        }

        return array;
    }