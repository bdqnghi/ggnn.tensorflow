import java.util.Arrays;
import java.util.Random;

public class Radix{


	public static int[] criaVetor(int n){
		int []vetor = new int[n];
		Random cria = new Random();
		for(int i=0; i<n; i++){
			vetor[i] = cria.nextInt(1000);
	    }
		return vetor;
	}

	public static int procuraMaior(int[] vetor){
		int maior = vetor[0];

		for(int i = 1; i < vetor.length; i++){
			if(vetor[i] > maior){
				maior = vetor [i];
			}


		}
		return maior;
	}


	public static void radixSort(int[] vetor, int[] vetorSaida){

        int m = procuraMaior(vetor);
 
        for (int casa = 1; m/casa > 0; casa *= 10){
            countingSort(vetor, vetorSaida, m);
        }
    }


	public static void countingSort(int[] vetorEntrada, int[] vetorSaida, int maior){
        int[] vetorAux = new int[maior + 1];

        
        for (int i=0; i<vetorAux.length; ++i){
            vetorAux[i] = 0;
        }

        
        for (int i = 0; i < vetorEntrada.length; i++) {
        
        
            vetorAux[vetorEntrada[i]]++; 
        }
        
        
        for (int i = 1; i < vetorAux.length; i++) {
        
        
        
            vetorAux[i] += vetorAux[i - 1];
        }

        
        for (int i = vetorEntrada.length - 1; i >= 0; i--) {
        
        
        
            vetorSaida[vetorAux[vetorEntrada[i]]-1] = vetorEntrada[i];
            vetorAux[vetorEntrada[i]]--;
        }

        
        for (int i = 0; i < vetorEntrada.length; i++) {
            vetorEntrada[i] = vetorSaida[i];
        }
	}


    public static void main(String[] args){
        int []vetor = criaVetor(1000);


        int[] B = new int[vetor.length];  
                
        System.out.println("O vetor desordenado e':");
        System.out.println(Arrays.toString(vetor));

        
        
        
        radixSort(vetor, B);
        
        System.out.println("O vetor ordenado e':");
        System.out.println(Arrays.toString(vetor));
        

    }
    

}