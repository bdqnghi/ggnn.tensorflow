public float[] toArray() {
    float[] array = new float[size];
    System.arraycopy(items, 0, array, 0, size);
    return array;
}
