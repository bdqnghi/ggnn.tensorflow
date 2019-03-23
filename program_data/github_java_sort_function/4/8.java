
package org.burstsort4j;


public class Heapsort {

    private Heapsort() {
    }

    
    public static <T extends Comparable<? super T>> void sort(T[] input) {
        if (input == null || input.length < 2) {
            return;
        }

        
        for (int start = (input.length - 2) / 2; start >= 0; start--) {
            
            
            int root = start;
            
            while (root * 2 + 1 < input.length) {
                
                int child = root * 2 + 1;
                
                
                if ((child + 1 < input.length) &&
                        input[child].compareTo(input[child + 1]) < 0) {
                    
                    child++;
                }
                
                if (input[root].compareTo(input[child]) < 0) {
                    T temp = input[root];
                    input[root] = input[child];
                    input[child] = temp;
                    
                    root = child;
                } else {
                    break;
                }
            }
        }
        

        for (int end = input.length - 1; end > 0; end--) {
            
            
            T temp = input[end];
            input[end] = input[0];
            input[0] = temp;
            
            int root = 0;
            
            while (root * 2 + 1 < end) {
                
                int child = root * 2 + 1;
                
                
                if ((child + 1 < end) &&
                        input[child].compareTo(input[child + 1]) < 0) {
                    
                    child++;
                }
                
                if (input[root].compareTo(input[child]) < 0) {
                    temp = input[root];
                    input[root] = input[child];
                    input[child] = temp;
                    
                    root = child;
                } else {
                    break;
                }
            }
            
            
        }
    }
}
