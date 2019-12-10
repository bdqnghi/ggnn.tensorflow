public void reverse() {
    for (int i = 0, lastIndex = size - 1, n = size / 2; i < n; i++) {
        int ii = lastIndex - i;
        K tempKey = keys[i];
        keys[i] = keys[ii];
        keys[ii] = tempKey;
        V tempValue = values[i];
        values[i] = values[ii];
        values[ii] = tempValue;
    }
}
