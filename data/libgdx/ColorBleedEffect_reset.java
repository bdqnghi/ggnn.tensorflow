void reset() {
    index = 0;
    for (int i = 0; i < changingSize; i++) {
        int index = changing[i];
        data[index] = REALDATA;
    }
    changingSize = 0;
}
