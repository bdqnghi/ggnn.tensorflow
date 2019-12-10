/**
 * Removes the current actor for the cell, if any.
 */
public Cell<T> clearActor() {
    setActor(null);
    return this;
}
