/**
 * @return the index of the attribute with the specified type or negative if not available.
 */
protected int indexOf(final long type) {
    if (has(type))
        for (int i = 0; i < attributes.size; i++) if (attributes.get(i).type == type)
            return i;
    return -1;
}
