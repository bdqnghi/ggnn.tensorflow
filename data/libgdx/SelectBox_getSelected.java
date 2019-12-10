/**
 * Returns the first selected item, or null. For multiple selections use {@link SelectBox#getSelection()}.
 */
public T getSelected() {
    return selection.first();
}
