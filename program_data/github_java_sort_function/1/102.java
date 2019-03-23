public <T extends Comparable<T>> void sort(T[] elems) {
 7         int size = elems.length;
 8 
 9         for (int outerLoopIdx = 1; outerLoopIdx < size; ++outerLoopIdx) {
10             for (int innerLoopIdx = outerLoopIdx; innerLoopIdx > 0; --innerLoopIdx) {
11                 if (elems[innerLoopIdx - 1].compareTo(elems[innerLoopIdx]) > 0) {
12                     T temp = elems[innerLoopIdx - 1];
13                     elems[innerLoopIdx - 1] = elems[innerLoopIdx];
14                     elems[innerLoopIdx] = temp;
15                 }
16             }
17         }
18     }