/**
 * Removes from this array all of elements contained in the specified array.
 * @param identity True to use ==, false to use .equals().
 * @return true if this array was modified.
 */
public boolean removeAll(Array<? extends T> array, boolean identity) {
    int size = this.size;
    int startSize = size;
    T[] items = this.items;
    if (identity) {
        for (int i = 0, n = array.size; i < n; i++) {
            T item = array.get(i);
            for (int ii = 0; ii < size; ii++) {
                if (item == items[ii]) {
                    removeIndex(ii);
                    size--;
                    break;
                }
            }
        }
    } else {
        for (int i = 0, n = array.size; i < n; i++) {
            T item = array.get(i);
            for (int ii = 0; ii < size; ii++) {
                if (item.equals(items[ii])) {
                    removeIndex(ii);
                    size--;
                    break;
                }
            }
        }
    }
    return size != startSize;
}
