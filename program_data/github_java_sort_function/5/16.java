  private static void ordenarBubbleSort(int meuArray[]){

        for(int i = 0; i < meuArray.length; ++i){
            for(int j = 0; j < meuArray.length - i - 1; ++j){
                if(meuArray[j] > meuArray[j+1]){
                    int temporario = meuArray[j];
                    meuArray[j] = meuArray[j+1];
                    meuArray[j+1] = temporario;
                }
            }
        }
    }