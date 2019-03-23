

package Data_Structures;
import java.util.*;

public class Heap {

    int[] heap;
    int heapSize = 0;

    public Heap(int n){
        heap = new int[n];
    }

    
    public int parent(int i) {
        return (i-1)/2;
    }

    
    public int left(int i) {
        return (2*i + 1);
    }

    
    public int right(int i) {
        return (2*i + 2);
    }

    
    public void insertMax(int k){

        
        heapSize++;

        
        int i = heapSize-1;

        
        heap[i] = k;

        
        
        while(i!=0 && heap[parent(i)] < heap[i]){

            
            int temp = heap[parent(i)];
            heap[parent(i)] = heap[i];
            heap[i] = temp;

            
            i = parent(i);

        }
    }

    
    public void MaxHeapify(int i){

        
        int leftChild = left(i);

        
        int rightChild = right(i);

        
        int largest = i;

        
        if (leftChild < heapSize && heap[leftChild] > heap[i])
            largest = leftChild;

        
        if (rightChild < heapSize && heap[rightChild] > heap[largest])
            largest = rightChild;

        
        if (largest != i)
        {
            
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;

            
            MaxHeapify(largest);
        }
    }

    
    public void extractMaxMin(){

        
        int root = heap[0];

        
        int last = heap[heapSize-1];

        
        heap[heapSize-1] = root;

        
        heap[0] = last;

        
        heapSize--;

        
        
        
        

    }

    
    public void insertMin(int k){

        
        heapSize++;

        
        int i = heapSize-1;

        
        heap[i] = k;

        
        
        while(i!=0 && heap[parent(i)] > heap[i]){

            
            int temp = heap[parent(i)];
            heap[parent(i)] = heap[i];
            heap[i] = temp;

            
            i = parent(i);

        }
    }

    
    public void MinHeapify(int i){

        
        int leftChild = left(i);

        
        int rightChild = right(i);

        
        int smallest = i;

        
        if (leftChild < heapSize && heap[leftChild] < heap[i])
            smallest = leftChild;

        
        if (rightChild < heapSize && heap[rightChild] < heap[smallest])
            smallest = rightChild;

        
        if (smallest != i)
        {
            
            int temp = heap[i];
            heap[i] = heap[smallest];
            heap[smallest] = temp;

            
            MinHeapify(smallest);
        }
    }


}
