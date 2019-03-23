package sorting;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import static java.lang.Math.pow;
import static sorting.utils.isGreaterThan;
import static sorting.utils.isLessThan;
import static sorting.utils.swap;


public class shell extends sorter {
    public shell(List<Comparable> aToSort) {
        setArray(aToSort);
        sort(array);
    }

    private List<Integer> getHsteps(int N){
        List<Integer> list = new ArrayList<>();

        list.add(1);

        for(int i = 1; (pow(2,i) + 1) < N/2 ; i++)
            list.add((int) (pow(2,i) + 1));

        Collections.reverse(list);

        return list;
    }

    void sort(List<Comparable> a) {
        int N = a.size();
        List<Integer> hsteps = getHsteps(a.size());

        for (Integer h : hsteps)
            for (int i = h; i < N; i++)
                for (int j = i; j >= h && isLessThan(a.get(j), a.get(j - h)); j -= h)
                    swap(a, j, j-h);
    }
}
