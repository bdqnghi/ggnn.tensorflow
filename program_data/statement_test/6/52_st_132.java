package sort;



import java.util.LinkedList;
import java.util.Queue;

public class RadixSort implements Solution {
    @Override
    public int[] sort(int[] num) 

    private void radixSort(int[] num, int count) {
        Queue<Integer>[] bucket = new Queue[10];
        for (int i = 0; i < 10; i++)
            bucket[i] = new LinkedList<Integer>();

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < num.length; j++) {  
                int key = num[j] % (int) Math.pow(10, i + 1) / (int) Math.pow(10, i);
                bucket[key].add(num[j]);
            }

            int index = 0;
            for (int k = 0; k < 10; k++) {  
                if (bucket[k].size() == 0)
                    continue;

                while (!bucket[k].isEmpty())
                    num[index++] = bucket[k].poll();
            }
        }
    }
}
