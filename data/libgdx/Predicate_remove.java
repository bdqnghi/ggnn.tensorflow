@Override
public void remove() {
    if (peeked)
        throw new GdxRuntimeException("Cannot remove between a call to hasNext() and next().");
    iterator.remove();
}
