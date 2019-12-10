@Override
public void swap(int i, int k) {
    T t;
    i = strideSize * i;
    k = strideSize * k;
    for (int c = i + strideSize; i < c; ++i, ++k) {
        t = data[i];
        data[i] = data[k];
        data[k] = t;
    }
}
