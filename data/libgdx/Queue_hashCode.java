public int hashCode() {
    final int size = this.size;
    final T[] values = this.values;
    final int backingLength = values.length;
    int index = this.head;
    int hash = size + 1;
    for (int s = 0; s < size; s++) {
        final T value = values[index];
        hash *= 31;
        if (value != null)
            hash += value.hashCode();
        index++;
        if (index == backingLength)
            index = 0;
    }
    return hash;
}
