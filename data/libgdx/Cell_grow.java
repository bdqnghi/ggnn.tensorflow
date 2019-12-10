/**
 * Sets expandX, expandY, fillX, and fillY to 1.
 */
public Cell<T> grow() {
    expandX = onei;
    expandY = onei;
    fillX = onef;
    fillY = onef;
    return this;
}
