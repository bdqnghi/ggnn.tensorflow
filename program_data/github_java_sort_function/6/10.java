package sort_algs;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Locale;

public class Radix implements SortingAlgorithm {

    private final static int INTEGRAL = 3;
    private final static int FRACTIONAL = 6;

    public void bucketSort(ArrayList<String> toSort) {
        int valueLength = INTEGRAL + FRACTIONAL + 1;
        int cursor;
        HashMap<Character, LinkedList<String>> sortedDigits = new HashMap<>();
        char tmp;
        while (sortedDigits.size() < 10){
            tmp = (char) (sortedDigits.size()+48);
            sortedDigits.put( tmp, new LinkedList<String>());
        }

        for (int i = valueLength - 1; i >= 0; i--) {
            if (!(i == INTEGRAL)) {
                for (String value : toSort){
                    sortedDigits.get(value.charAt(i)).addLast(value);
                }
                cursor = 0;
                for (HashMap.Entry<Character, LinkedList<String>> entry : sortedDigits.entrySet()){
                    while (!entry.getValue().isEmpty()){

                        toSort.set(cursor, entry.getValue().poll());
                        cursor++;
                    }
                }
            }
        }
    }

    public double[] sort(double[] toSort) {
        ArrayList<String> negValues = new ArrayList<String>(toSort.length);
        ArrayList<String> posValues = new ArrayList<String>(toSort.length);
        ArrayList<String> values;
        String aligned;
        int valueLength = INTEGRAL + FRACTIONAL + 1;
        int separator;
        int cursor = 0;

        for (double element : toSort) { 

            if (element < 0) {
                values = negValues;
                aligned = String.format(Locale.UK, "%."+FRACTIONAL+"f", - element);
            } else {
                values = posValues;
                aligned = String.format(Locale.UK, "%."+FRACTIONAL+"f",element);
            }

            separator = aligned.indexOf(".");

            while (separator < INTEGRAL) {
                aligned = "0" + aligned;
                separator++;
            }
            while (aligned.length() < valueLength) {
                aligned = aligned + "0";
            }
            if (aligned.length() == valueLength) {
                values.add(aligned);
            } else return null;
        }

        bucketSort(negValues);
        bucketSort(posValues);

        for (int i = negValues.size() - 1; i >= 0; i--){
            toSort[cursor++] = 0 - Double.parseDouble(negValues.get(i));
        }
        for (int i = 0; i < posValues.size(); i++){
            toSort[cursor++] = Double.parseDouble(posValues.get(i));
        }

        return toSort;
    }
}