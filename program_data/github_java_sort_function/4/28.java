
public class Heapsort {
	
	
    public static void heapsort (int inputArr[]) {
        int length = inputArr.length;
 
        
        
        for (int i = length / 2 - 1; i >= 0; i--) {
            heapify(inputArr, length, i);
        }
 
        
        
        
        for (int i = length - 1; i >= 0; i--) {
            int tmp = inputArr[0];
            inputArr[0] = inputArr[i];
            inputArr[i] = tmp;
            heapify(inputArr, i, 0);
        }
    }
 
    
    private static void heapify (int inputArr[], int heapSize, int node) {
    	
        int max = node;  				
        int leftChild = 2 * node + 1;  	
        int rightChild = 2 * node + 2;  	
 
        
        
        if (leftChild < heapSize && inputArr[leftChild] > inputArr[max]) {
        	max = leftChild;
        }
 
        
        
        if (rightChild < heapSize && inputArr[rightChild] > inputArr[max]) {
        	max = rightChild;
        }
 
        
        
        if (max != node) {
        	int swap = inputArr[node];
            inputArr[node] = inputArr[max];
            inputArr[max] = swap;
            heapify(inputArr, heapSize, max);
        }
    }
}