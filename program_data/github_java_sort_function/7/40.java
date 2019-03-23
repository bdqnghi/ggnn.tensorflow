public static void shellSortMarca(Automovil A[], int numAle){
        int salto, j;
        Automovil aux;
        boolean cambios;
        for(salto=numAle/2; salto!=0; salto/=2){
            cambios=true;
            while(cambios==true){ 
                cambios=false;
                for(j=salto; j< numAle; j++) 
                    if((A[j-salto].getMarca().compareTo(A[j].getMarca()))>0){ 
                        aux=A[j]; 
                        A[j]=A[j-salto];
                        A[j-salto]=aux;
                        cambios=true; 
                    }
            }
        }
    }