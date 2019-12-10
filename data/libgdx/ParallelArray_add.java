@Override
public void add(int index, Object... objects) {
    for (int i = strideSize * size, c = i + strideSize, k = 0; i < c; ++i, ++k) {
        this.data[i] = (T) objects[k];
    }
}
