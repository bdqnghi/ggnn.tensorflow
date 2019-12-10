/**
 * Sets fillX and fillY to 1 if true, 0 if false.
 */
public Cell<T> fill(boolean fill) {
    fillX = fill ? onef : zerof;
    fillY = fill ? onef : zerof;
    return this;
}
