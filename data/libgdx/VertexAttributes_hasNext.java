@Override
public boolean hasNext() {
    if (!valid)
        throw new GdxRuntimeException("#iterator() cannot be used nested.");
    return index < array.length;
}
