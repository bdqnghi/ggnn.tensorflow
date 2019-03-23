    public static <E extends Comparable<E>> E[] sort(E[] array, E[] separator){
        
        Bucket<Object>[] buckets = (Bucket<Object>[])new Bucket[separator.length +1];
        
        for (int i = 0; i<array.length; i++){
            int j = 0;
            while(separator[j].compareTo(array[i])==1 && j < separator.length -1){
                j++;
            }
            buckets[j].add(array[i]);
        }
        
        E[] bigarray = (E[]) new Object[0];
        for (int i = 0; i < buckets.length; i++){
            E[] arr = (E[])new Object[buckets[i].getElem().size()];
            buckets[i].getElem().toArray(arr);
            
            bigarray = addAll(bigarray, insertionsort(arr));
        }
        return bigarray;
    }
    
    public static <E extends Comparable<E>> E[] addAll(E[] eins, E[] zwei){     
        E[] neu = (E[])new Object[eins.length+zwei.length];
        for (int i = 0; i<eins.length;i++)
            neu[i] = eins[i];
        for (int i = 0; i<zwei.length;i++)
            neu[i+eins.length]= zwei[i];
        return neu;
    }
    
    public static <E extends Comparable<E>> E[] insertionsort (E[] array){      
        int count = 0;
        for (int i = 1; i < array.length; i++){
                E a = array[i];
            int j = i;
            while(j > 0 && array[j-1].compareTo(a) > 0){
                array[j] = array[j-1];
                j--;
                count++;
            }
            if (j > 0)
                count++;
            array[j] = a;
        }
        return array;
    }   