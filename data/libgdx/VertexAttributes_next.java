@Override
public T next() {
    if (index >= array.length)
        throw new NoSuchElementException(String.valueOf(index));
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    return array[index++];
}
