private void remove(int index) {
    for (int i = 0, n = remove.size; i < n; i++) {
        int removeIndex = remove.get(i);
        if (index == removeIndex)
            return;
        if (index < removeIndex) {
            remove.insert(i, index);
            return;
        }
    }
    remove.add(index);
}
