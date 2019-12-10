private int getIndex(String index, int size) {
    if (index == null || index.length() == 0)
        return 0;
    final int idx = Integer.parseInt(index);
    if (idx < 0)
        return size + idx;
    else
        return idx - 1;
}
