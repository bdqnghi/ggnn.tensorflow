package Sorting;

import java.util.List;

public class Insertionsort {
    public static <T extends Comparable<T>> List<T> insertionsort(List<T> array){
        if(array.size() <=1){
            return array;
        }
        int curIndex = 1;
        T curNum;
        while(curIndex < array.size()){
            curNum = array.get(curIndex);
            int compareIndex = curIndex-1;
            boolean moved = false;
            while(compareIndex >=0 && curNum.compareTo(array.get(compareIndex))<0){
                array.set(compareIndex+1,array.get(compareIndex));
                compareIndex--;
                moved = true;
            }
            if(moved){
                array.set(compareIndex+1,curNum);
            }
            curIndex++;
        }
        return array;
    }
}
