public void flip(boolean x, boolean y) {
    if (x) {
        float temp = u;
        u = u2;
        u2 = temp;
    }
    if (y) {
        float temp = v;
        v = v2;
        v2 = temp;
    }
}
