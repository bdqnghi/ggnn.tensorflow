package BubleSort;

public class Principal { 

public static void main(String[] args){

int[] vet = {5,10,2,6,3,2};

 
	for ( x = 0; x < vet.length; x++) { 

		for (y = 0; y < vet.length - 1; y++,cont++) { 
			if (vet[y] > vet[y + 1]) { 
				aux = vet[y]; 
				vet[y] = vet[y + 1]; 
				vet[y + 1] = aux;
				
			} 
	
		}
	
	}

}