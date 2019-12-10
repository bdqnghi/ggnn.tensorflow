private float[] ensureSize(float[] array, int size) {
    if (array == null || array.length < size)
        return new float[size];
    for (int i = 0, n = array.length; i < n; i++) array[i] = 0;
    return array;
}
