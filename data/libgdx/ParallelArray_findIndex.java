private int findIndex(int id) {
    for (int i = 0; i < arrays.size; ++i) {
        Channel array = arrays.items[i];
        if (array.id == id)
            return i;
    }
    return -1;
}
