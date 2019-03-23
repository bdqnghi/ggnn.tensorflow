public static void bubbleSort(double[] list) {
        for(int i = 0; i < list.length; i++){
            for(int j = 1; j < list.length - 1; j++){
                if(list[j-1] > list[j]){
                    double temp = list[j-1];
                    list[j-1] = list[j];
                    list[j] = temp;
                }
            }
        }
    }
}