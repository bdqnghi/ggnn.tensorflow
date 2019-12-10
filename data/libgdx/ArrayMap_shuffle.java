public void shuffle() {
    for (int i = size - 1; i >= 0; i--) {
        int ii = MathUtils.random(i);
        K tempKey = keys[i];
        keys[i] = keys[ii];
        keys[ii] = tempKey;
        V tempValue = values[i];
        values[i] = values[ii];
        values[ii] = tempValue;
    }
}
