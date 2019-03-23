public static double[] bubblesort(double[] list, boolean ascending){
        
        double[] sortedList = list;
        double switchPos;
        boolean cont;
        
        do{
            cont  = false;
            for (int i = 0; i < sortedList.length-1; i++){
                if (!functions.compare(sortedList[i], sortedList[i+1], ascending)){
                    cont = true;
                    switchPos = sortedList[i];
                    sortedList[i] = sortedList[i+1];
                    sortedList[i+1] = switchPos;
                }
            }
        }while(cont);
        
        return sortedList;
    }
    