/**
 * Sort the attributes by their ID
 */
public final void sort() {
    if (!sorted) {
        attributes.sort(this);
        sorted = true;
    }
}
