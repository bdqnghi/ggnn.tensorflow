package sortingAlgorithms.algorithms.linear;

import sortingAlgorithms.algorithms.SortingAlgorithm;

import java.util.ArrayList;
import java.util.List;


public class RadixSort implements SortingAlgorithm {

    
    @Override
    @SuppressWarnings("unchecked")
    public List<Integer> sort(List<Integer> list) {

        
        if (list == null) {
            throw new IllegalArgumentException("ArrayList not specified!");
        }

        
        
        int exp = 1;

        
        int maxDigits = 2;

        for (int i = 0; i < maxDigits; i++) {

            
            List[] bucketList = new ArrayList[10];
            for (int k = 0; k < 10; k++) {
                bucketList[k] = new ArrayList<Integer>();
            }
            for (Integer aList : list) {
                int number = (aList / exp) % 10;
                bucketList[number].add(aList); 
            }
            exp *= 10;
            int index = 0;
            for (int k = 0; k < 10; k++) {
                for (Object num : bucketList[k]) {
                    list.set(index, (Integer) num);
                    index++;
                }
            }
        }
        return list;
    }
}
