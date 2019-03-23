 import  java.util.Scanner ;
public class insertionsort {
   


    public  static  void  main ( String [] args ) {
        
        Scanner tcl =  new  Scanner ( System.in);
        
        int vetor [] = new int [5];
        
        for( int i =  0 ; i < vetor.length; i ++ ) {
            vetor [i] = tcl . nextInt ();
        }
        int aux;
        
        for( int i =  0 ; i < vetor.length; i ++ ) {
            aux = vetor [i];
            
            for( int j = i - 1 ; j >=  0 && vetor[j] > aux; j -- ) {
            vetor [j +  1 ] = vetor [j];  
            vetor [j] = aux;  
            }
        }
        System.out.println("");
        
        for( int i =  0 ; i < vetor.length; i ++ ) {
            System.out.print(vetor [i]+"\t");
        }
    }
    
}

