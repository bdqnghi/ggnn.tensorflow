private void removeDuplicates(Array<AssetDescriptor> array) {
    boolean ordered = array.ordered;
    array.ordered = true;
    for (int i = 0; i < array.size; ++i) {
        final String fn = array.get(i).fileName;
        final Class type = array.get(i).type;
        for (int j = array.size - 1; j > i; --j) {
            if (type == array.get(j).type && fn.equals(array.get(j).fileName))
                array.removeIndex(j);
        }
    }
    array.ordered = ordered;
}
