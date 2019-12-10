/**
 * Sets the comparator for {@link #processDir(Entry, ArrayList)}. By default the files are sorted by alpha.
 */
public FileProcessor setComparator(Comparator<File> comparator) {
    this.comparator = comparator;
    return this;
}
