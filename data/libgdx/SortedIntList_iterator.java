/**
 * Returns an iterator to traverse the list.<br/>
 * Only one iterator can be active per list at any given time.
 *
 * @return Iterator to traverse list
 */
public java.util.Iterator<Node<E>> iterator() {
    if (iterator == null) {
        iterator = new Iterator();
    }
    return iterator.reset();
}
