

import java.util.*;
import java.nio.file.*;
import java.io.*;

public class Radix{

    
    
    
    public static int[] B;
    public static long t;
    public static void main(String[] args) throws IOException{
        
        Scanner in = new Scanner(Paths.get("../input/input_integers.txt"), "UTF-8");
        PrintWriter outTime = new PrintWriter("../output/radix_sort/time.txt", "UTF-8");
        
        int[] origin=new int[1<<17];
        for(int i = 0; i < 1<<23; i++){
            origin[i] = in.nextInt();
        }

        int[] exp={2, 5, 8, 11, 14, 17};
        
        
        for(int index : exp){
            int[] partArray = Arrays.copyOf(origin, 1<<index);
            
            
            long enduration = sort(partArray)/1000;
            partArray = B;
            
            outTime.println("index: " + index + "\ntime: " + enduration + "\tmicroseconds.");
            outTime.flush();

            
            System.out.println("index: " + index + "\ntime: " + enduration + "\tmicroseconds.\n");
            
            PrintWriter outSort = new PrintWriter("../output/radix_sort/result_"+index+".txt", "UTF-8");
            for(int j = 0; j < 1<<index; j++){
                
                outSort.println(partArray[j]);
                outSort.flush();
            }
        }
    }
    
    
    public static long sort(int[] A){
        
        long startTime = System.nanoTime();
        
        
        radix_sort(A, 4);

        
        long endTime = System.nanoTime();
        return endTime - startTime;
    }

    public static void radix_sort(int[] A, int d){
        for(int i = 1; i <= d; i++){
            counting_sort(A, i);
            A = B;
        }
    }

    
    
    public static int digit(int num, int d){
        
        
        return (num >> (4*(d-1))) & 0x0f;
    }

    public static void counting_sort(int[] A, int d){
        int tmp;
        int l = A.length;
        B = new int[l];
        int[] C = new int[16];

        for(int i = 0; i < l; i++){
            C[digit(A[i], d)]++;
        }
        

        for(int i = 1; i < 16; i++){
            C[i] += C[i-1];
        }
        

        for(int i = l-1; i >= 0; i--){
            B[C[digit(A[i], d)]-1] = A[i];
            C[digit(A[i], d)] --;
        }
    }
}

