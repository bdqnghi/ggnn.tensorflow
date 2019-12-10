public <V> V[] toArray(Class type) {
    V[] result = (V[]) ArrayReflection.newInstance(type, size);
    System.arraycopy(items, 0, result, 0, size);
    return result;
}
