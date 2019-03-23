  private static void ordenarSelectionSort(int meuArray[]){

        for(int i = 0; i < meuArray.length - 1; ++i){
            int indiceMenorNumero = i;

            for(int j = i + 1; j < meuArray.length; j++){
                if(meuArray[j] < meuArray[indiceMenorNumero]){
                    indiceMenorNumero = j;
                }
            }

            int temporario = meuArray[indiceMenorNumero];
            meuArray[indiceMenorNumero] = meuArray[i];
            meuArray[i] = temporario;
        }
    }
