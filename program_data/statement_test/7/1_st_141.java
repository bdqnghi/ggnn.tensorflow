  public void sort(Comparable[] a) 
    public boolean less(Comparable v, Comparable w) {
        return v.compareTo(w) < 0;
    }
    public void exch(Comparable[] a, int i, int j) {
        Comparable swap = a[i];
        a[i] = a[j];
        a[j] = swap;
    }