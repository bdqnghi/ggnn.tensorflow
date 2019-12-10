/**
 * Adds an element considering the values in the same order as the current channels in the array.
 *  The n_th value  must have the same type and stride of the given channel at position n
 */
public void addElement(Object... values) {
    /*FIXME make it grow...*/
    if (size == capacity)
        throw new GdxRuntimeException("Capacity reached, cannot add other elements");
    int k = 0;
    for (Channel strideArray : arrays) {
        strideArray.add(k, values);
        k += strideArray.strideSize;
    }
    ++size;
}
