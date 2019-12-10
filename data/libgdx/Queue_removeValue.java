/**
 * Removes the first instance of the specified value in the queue.
 * @param identity If true, == comparison will be used. If false, .equals() comparison will be used.
 * @return true if value was found and removed, false otherwise
 */
public boolean removeValue(T value, boolean identity) {
    int index = indexOf(value, identity);
    if (index == -1)
        return false;
    removeIndex(index);
    return true;
}
