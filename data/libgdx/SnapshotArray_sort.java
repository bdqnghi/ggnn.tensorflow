public void sort(Comparator<? super T> comparator) {
    modified();
    super.sort(comparator);
}
