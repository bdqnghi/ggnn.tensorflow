private int partition(int left, int right, int pivot) {
    T pivotValue = array[pivot];
    swap(right, pivot);
    int storage = left;
    for (int i = left; i < right; i++) {
        if (comp.compare(array[i], pivotValue) < 0) {
            swap(storage, i);
            storage++;
        }
    }
    swap(right, storage);
    return storage;
}
