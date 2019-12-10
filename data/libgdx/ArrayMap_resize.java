protected void resize(int newSize) {
    K[] newKeys = (K[]) ArrayReflection.newInstance(keys.getClass().getComponentType(), newSize);
    System.arraycopy(keys, 0, newKeys, 0, Math.min(size, newKeys.length));
    this.keys = newKeys;
    V[] newValues = (V[]) ArrayReflection.newInstance(values.getClass().getComponentType(), newSize);
    System.arraycopy(values, 0, newValues, 0, Math.min(size, newValues.length));
    this.values = newValues;
}
