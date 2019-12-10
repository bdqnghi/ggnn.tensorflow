/**
 * Reduces the size of the backing array to the size of the actual items. This is useful to release memory when many items have
 * been removed, or if it is known that more items will not be added.
 * @return {@link #items}
 */
public char[] shrink() {
    if (items.length != size)
        resize(size);
    return items;
}
