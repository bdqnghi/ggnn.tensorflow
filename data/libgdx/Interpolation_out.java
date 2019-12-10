private float out(float a) {
    float test = a + widths[0] / 2;
    if (test < widths[0])
        return test / (widths[0] / 2) - 1;
    return super.apply(a);
}
