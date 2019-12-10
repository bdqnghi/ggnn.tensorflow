/**
 * Increases the size of the backing array to accommodate the specified number of additional items. Useful before adding many
 * items to avoid multiple backing array resizes.
 */
public void ensureCapacity(int additional) {
    final int needed = size + additional;
    if (values.length < needed) {
        resize(needed);
    }
}
