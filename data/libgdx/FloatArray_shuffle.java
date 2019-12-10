public void shuffle() {
    float[] items = this.items;
    for (int i = size - 1; i >= 0; i--) {
        int ii = MathUtils.random(i);
        float temp = items[i];
        items[i] = items[ii];
        items[ii] = temp;
    }
}
