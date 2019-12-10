/**
 * Sets expandX and expandY to 1 if true, 0 if false.
 */
public Cell<T> expand(boolean x, boolean y) {
    expandX = x ? onei : zeroi;
    expandY = y ? onei : zeroi;
    return this;
}
