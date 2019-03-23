
public static <T> void quickSort(ArrayList<T> array, int left, int right, Comparator<T> comp) {
    
    Random rnd = new Random();
    if (right>left) {  
        T temp;        
  
        
        T pivot = array.get((rnd.nextInt(right-left)+left));
  
        
        int l = left-1;
        int r = right;
        do {
            do l++; while (comp.compare(array.get(l),pivot)<0);
            do r--; while (r>l && comp.compare(array.get(r),pivot)>0);

            
            temp = array.get(l);
            array.set(l, array.get(r));
            array.set(r, temp);
    
        } while (r>l);

        array.set(r, array.get(l));   

        
        array.set(l, pivot);
        array.set(right, temp);
  
        
        
        quickSort(array, left, l-1, comp);
        quickSort(array, l+1, right, comp);
        
        }
    }
}
