/**
 * Sets the selection to only the selected index.
 */
public void setSelectedIndex(int index) {
    if (index < -1 || index >= items.size)
        throw new IllegalArgumentException("index must be >= -1 and < " + items.size + ": " + index);
    if (index == -1) {
        selection.clear();
    } else {
        selection.set(items.get(index));
    }
}
