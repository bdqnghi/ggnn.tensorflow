/**
 * Resize backing array. newSize must be bigger than current size.
 */
protected void resize(int newSize) {
    final T[] values = this.values;
    final int head = this.head;
    final int tail = this.tail;
    @SuppressWarnings("unchecked")
    final T[] newArray = (T[]) ArrayReflection.newInstance(values.getClass().getComponentType(), newSize);
    if (head < tail) {
        // Continuous
        System.arraycopy(values, head, newArray, 0, tail - head);
    } else if (size > 0) {
        // Wrapped
        final int rest = values.length - head;
        System.arraycopy(values, head, newArray, 0, rest);
        System.arraycopy(values, 0, newArray, rest, tail);
    }
    this.values = newArray;
    this.head = 0;
    this.tail = size;
}
