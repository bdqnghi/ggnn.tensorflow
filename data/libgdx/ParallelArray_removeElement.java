/**
 * Removes the element at the given index and swaps it with the last available element
 */
public void removeElement(int index) {
    int last = size - 1;
    // Swap
    for (Channel strideArray : arrays) {
        strideArray.swap(index, last);
    }
    size = last;
}
