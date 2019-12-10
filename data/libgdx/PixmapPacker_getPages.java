/**
 * @return the {@link Page} instances created so far. If multiple threads are accessing the packer, iterating over the pages
 *         must be done only after synchronizing on the packer.
 */
public Array<Page> getPages() {
    return pages;
}
