/**
 * Retrieves an element at a given index
 *
 * @param index Index of the element to retrieve
 * @return Matching element, null otherwise
 */
public E get(int index) {
    E match = null;
    if (first != null) {
        Node<E> c = first;
        while (c.n != null && c.index < index) {
            c = c.n;
        }
        if (c.index == index) {
            match = c.value;
        }
    }
    return match;
}
