public class Sort{
    
    public void insertSort(int [] l){  
        if(l != null && l.length != 0){  
            for (int i = 2; i < l.length; i++) {  
                if(l[i] < l[i - 1]){  
                    l[0] = l[i];  
                    int j;  
                    for (j = i - 1; l[0] < l[j]; j--){  
                        l[j + 1] = l[j];  
                    }  
                    l[j + 1] = l[0];  
                }  
            }  
        }  
    }  

    
    public void binaryInsertSort(int [] l){  
        if(l != null && l.length != 0){  
            int j;  
            int low, high, mid;  
            for (int i = 2; i < l.length; i++) {  
                if(l[i] < l[i - 1]){  
                    l[0] = l[i];  
                    low = 1; high = i - 1;  
                    while (low <= high){  
                        mid = (low + high)/2;  
                        if(l[0] < l[mid]){  
                            high = mid - 1;  
                        } else {  
                            low = mid + 1;  
                        }  
                    }  
                    for(j = i - 1; j >= low; j--){  
                        l[j + 1] = l[j];  
                    }  
                    l[low] = l[0];  
                }  
            }  
            System.out.println(Arrays.toString(l));  
        }  
    }  

    
    private static void ShellSort(int [] l, int [] dk){  
        for (int aDk : dk) {  
            insertSort(l, aDk);  
        }  
    }  
      
    private static void insertSort(int [] l, int dk){  
        if(l != null && l.length != 0){  
            for (int i = dk + 1; i < l.length; i++) {  
                if(l[i] < l[i - dk]){  
                    l[0] = l[i];  
                    int j;  
                    for (j = i - dk; j > 0 && l[j] > l[0] ; j -= dk) {  
                        l[j + dk] = l[j];  
                    }  
                    l[j + dk] = l[0];  
                }  
            }  
            System.out.println(Arrays.toString(l));  
        }  
    } 

     
    public static void QuickSort(int [] r, int low, int high){  
        int temp;  
        if(low < high){  
            temp = QuickPass(r, low, high);  
            QuickSort(r, low, temp - 1);  
            QuickSort(r, temp + 1, high);  
        }  
        System.out.println(Arrays.toString(r));  
    }  

    public int QuickPass(int [] r, int low, int high){  
        int temp = r[low];  
        while (low < high){  
            while (low < high && r[high] >= temp){  
                high --;  
            }  
            r[low] = r[high];  
            while (low < high && r[low] < temp){  
                low ++ ;  
            }  
            r[high] = r[low];  
        }  
        r[low] = temp;  
        return low;  
    }

    
    public static void mergeSort(int [] l, int [] result, int left, int right){  
        if(left < right){  
            int middle = (left + right)/2;  
            mergeSort(l, result, left, middle);  
            mergeSort(l, result, middle + 1, right);  
            merge(l, result, left, right, middle);  
        }  
    }  
      
    public static void merge(int [] l, int [] result, int left, int right, int middle){  
        int p1, p2;  
        int i = p1 = left;  
        System.arraycopy(l, 0, result, 0, l.length);  
        p2 = middle + 1;  
        while (p1 <= middle && p2 <= right){  
            if(result[p2] >= result[p1]){  
                l[i] = result[p1];  
                p1 ++;  
            }  
            else{  
                l[i] = result[p2];  
                p2 ++;  
            }  
            i ++;  
        }  
        while (p1 <= middle){  
            l[i] = result[p1];  
            i ++;  
            p1 ++;  
        }  
        while (p2 <= middle){  
            l[i] = result[p2];  
            i ++;  
            p2 ++;  
        }  
    }  

    
    public class Radix {  
  
        private int value;  
        private Radix next;  
      
        private int getValue() {  
            return value;  
        }  
      
        private void setValue(int value) {  
            this.value = value;  
        }  
      
        private Radix getNext() {  
            return next;  
        }  
      
        private void setNext(Radix next) {  
            this.next = next;  
        }  
      
        public static void main(String [] args){  
            int [] l = {46, 25, 68, 33, 33, 19, 12, 80};  
            RadixSort(l);  
        }  
      
        private static void RadixSort(int [] l){  
            Radix[] linkedArray = new Radix[10];  
            Radix radix = initLinkedArray(l);  
              
            digit(radix, linkedArray, 0);  
            print(linkedArray);  
            int maxLength = maxLength(l);  
            for (int i = 1; i < maxLength; i++) {  
                Radix[] newLinkedArray = new Radix[10];  
                for (Radix aLinkedArray1 : linkedArray) {  
                    radix = aLinkedArray1;  
                    digit(radix, newLinkedArray, i);  
                }  
                linkedArray = newLinkedArray;  
                print(linkedArray);  
            }  
        }  
      
        private static Radix initLinkedArray(int [] l){  
            Radix radix = new Radix();  
            Radix temp = radix;  
            radix.setValue(l[0]);  
            for (int i = 1; i < l.length; i ++) {  
                Radix t1 = new Radix();  
                t1.setValue(l[i]);  
                temp.setNext(t1);  
                temp = t1;  
            }  
            return radix;  
        }  
      
          
        private static void digit(Radix radix, Radix[] newLinkedArray, int i){  
            while (radix != null) {  
                int value = radix.getValue();  
                String str = String.valueOf(value);  
                int c;  
                if (i < str.length()) {  
                    c = str.charAt(str.length() - i - 1) - 48;  
                } else {  
                    c = 0;  
                }  
                Radix newRadix = new Radix();  
                newRadix.setValue(radix.getValue());  
                if (newLinkedArray[c] == null) {  
                    newLinkedArray[c] = newRadix;  
                } else {  
                    Radix radix1 = newLinkedArray[c];  
                    while (radix1.getNext() != null) {  
                        radix1 = radix1.getNext();  
                    }  
                    radix1.setNext(newRadix);  
                }  
                radix = radix.getNext();  
            }  
        }  
      
        private static void print(Radix[] linkedArray){  
            for (Radix aLinkedArray : linkedArray) {  
                if(aLinkedArray == null){  
                    System.out.print("null");  
                }  
                while (aLinkedArray != null){  
                    System.out.print(aLinkedArray.getValue() + "    ");  
                    aLinkedArray = aLinkedArray.getNext();  
                }  
                System.out.println("");  
            }  
            System.out.println("----------------------------");  
        }  
      
        private static int maxLength(int [] l){  
            int max = l[0];  
            for (int i : l) {  
                if(i > max){  
                    max = i;  
                }  
            }  
            return String.valueOf(max).length();  
        }  
      
    }
    
}
