public int compare(Entry o1, Entry o2) {
    return comparator.compare(o1.inputFile, o2.inputFile);
}
