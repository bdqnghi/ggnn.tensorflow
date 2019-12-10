/**
 * Sets fillX and fillY to 1 if true, 0 if false.
 */
public Container<T> fill(boolean fill) {
    fillX = fill ? 1f : 0;
    fillY = fill ? 1f : 0;
    return this;
}
