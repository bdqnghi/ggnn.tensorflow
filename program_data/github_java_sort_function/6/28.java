
import asdlab.libreria.Ordinamento.*;

public class Ordinamento_Interi {

    public static void main(String[] args) {
    	String name, path, base_str;

    	
    	long time_integer=0, time_quick=0, time_merge=0, time_heap=0, time_radix=0;
    	
    	int array_random[], dimensione, scelta, base;
    	
    	AlgoritmiOrdinamento alg= new AlgoritmiOrdinamento();

    	System.out.println("Crea un array di numeri casuali\n"); 

		dimensione = CreaArray.decidi_dimensione(); 
		array_random = new int [dimensione]; 		
		CreaArray.interi(array_random, dimensione); 

		
		
		System.out.println("Inserisci il percorso dove salvare il file\nEs: C:\\percorso\\file\\\n");
		path = Read.readString();
		System.out.println("Inserisci il nome del file\nEs:test.txt\n");
		name = Read.readString();

		do {

		

			System.out.println("Crea un nuovo array di numeri casuali oppure scegli il tipo di algoritmo che vuoi utilizzare per ordinare l'array\n"+
							   "0 - Crea array random;\n"+
							   "1 - IntegerSort;\n"+
							   "2 - QuickSort;\n"+
							   "3 - MergeSort;\n"+
							   "4 - HeapSort;\n"+
							   "5 - RadixSort;\n"+
							   "6 - Se si desidera uscire;\n");
			scelta = Read.readInt();
			while(scelta<0 || scelta>6){
				System.out.println("Scelta non valida: Inserire un numero comreso tra 0 e 7\n");
				scelta = Read.readInt();
			}

		

		 	

    	 	switch (scelta) {
 				case 0:														
 					dimensione = CreaArray.decidi_dimensione();				
 					array_random = new int [dimensione];					
 					CreaArray.interi(array_random, dimensione);	
 				break;

 				case 1:
 					
					time_integer = Ordinamento.integersort(array_random, dimensione, alg);
					System.out.println("Tempo ordinamento array di "+dimensione+" elementi con IntegerSort: "+(double) time_integer/1000000+"ms\n");
					FileWrite.salva("IntegerSort", (double) time_integer/1000000, dimensione, path, name);
				break;

 				case 2:
 					
 					time_quick = Ordinamento.quicksort(array_random, dimensione, alg);
					System.out.println("Tempo ordinamento array di "+dimensione+" elementi con QuickSort: "+(double) time_quick/1000000+"ms\n");
					FileWrite.salva("QuickSort", (double) time_quick/1000000, dimensione, path, name);
 				break;

 				case 3:
 					
 					time_merge = Ordinamento.mergesort(array_random, dimensione, alg);
					System.out.println("Tempo ordinamento array di "+dimensione+" elementi con MergeSort: "+(double) time_merge/1000000+"ms\n");
					FileWrite.salva("MergeSort", (double) time_merge/1000000, dimensione, path, name);
 				break;

 				case 4:
 					
 					time_heap = Ordinamento.heapsort(array_random, dimensione, alg);
					System.out.println("Tempo ordinamento array di "+dimensione+" elementi con HeapSort: "+(double) time_heap/1000000+"ms\n");
					FileWrite.salva("HeapSort", (double) time_heap/1000000, dimensione, path, name);
 				break;

 				case 5:
 					
 					System.out.println("Scegliere la base del Radix-Sort: \n");
 					base = Read.readInt();
 					time_radix = Ordinamento.radixsort(array_random, dimensione, alg, base);
					System.out.println("Tempo ordinamento array di "+dimensione+" elementi con Radix-Sort: "+(double) time_radix/1000000+"ms\n");
					base_str = Integer.toString(base);
					FileWrite.salva("Radix-Sort base "+base_str+" " , (double) time_radix/1000000, dimensione, path, name);
 				break;
 			}

		} while (scelta != 6);

    }
}