private static void ordenarInsertionSort(int meuArray[]){
        for(int i = 1; i < meuArray.length; ++i){
            int valor = meuArray[i];
            int j = i - 1;

            while(j >= 0 && meuArray[j] > valor){
                meuArray[j+1] = meuArray[j];
                j = j - 1;
            }
            meuArray[j+1] = valor;
        }
    }

    