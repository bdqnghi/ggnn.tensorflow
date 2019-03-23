package 算法.几种常见的排序算法;

import java.util.Arrays;


public class SelectionSort {
    public static void main(String[] args) {
        int selectionSort[]= new int[]{5,2,8,4,9,1};
        for (int i=0;i<selectionSort.length-1;i++){
            int flag=i;
            for (int j=i;j<selectionSort.length;j++){
                if (selectionSort[j]<selectionSort[flag]){
                    flag=j;
                }
            }
            int temp=selectionSort[flag];
            selectionSort[flag]=selectionSort[i];
            selectionSort[i]=temp;
        }
        System.out.println(Arrays.toString(selectionSort));
    }
}

