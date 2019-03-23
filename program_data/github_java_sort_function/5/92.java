package 算法.几种常见的排序算法;

import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int bubblesort[]= new int[]{12, 33, 5, 8, 67};
        for(int i=0;i<bubblesort.length-1;i++){
            for (int j=0;j<bubblesort.length-1-i;j++){
                if(bubblesort[j]>bubblesort[j+1]){
                    int temp=bubblesort[j+1];
                    bubblesort[j+1]=bubblesort[j];
                    bubblesort[j]=temp;
                }
            }
        }
        System.out.println(Arrays.toString(bubblesort));
    }
}

