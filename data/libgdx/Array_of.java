/**
 * @see #Array(boolean, int, Class)
 */
static public <T> Array<T> of(boolean ordered, int capacity, Class<T> arrayType) {
    return new Array<T>(ordered, capacity, arrayType);
}
