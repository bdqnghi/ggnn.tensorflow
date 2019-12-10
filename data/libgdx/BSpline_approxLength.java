@Override
public float approxLength(int samples) {
    float tempLength = 0;
    for (int i = 0; i < samples; ++i) {
        tmp2.set(tmp3);
        valueAt(tmp3, (i) / ((float) samples - 1));
        if (i > 0)
            tempLength += tmp2.dst(tmp3);
    }
    return tempLength;
}
