/**
 * Inserts an element into the list at the given index
 *
 * @param index Index of the element
 * @param value Element to insert
 * @return Element replaced by newly inserted element, null if nothing was replaced
 */
public E insert(int index, E value) {
    if (first != null) {
        Node<E> c = first;
        // iterate to the right until we can't move any further because the next number is bigger than index
        while (c.n != null && c.n.index <= index) {
            c = c.n;
        }
        // add one to the right
        if (index > c.index) {
            c.n = nodePool.obtain(c, c.n, value, index);
            if (c.n.n != null) {
                c.n.n.p = c.n;
            }
            size++;
        } else // the new element is smaller than every other element
        if (index < c.index) {
            Node<E> newFirst = nodePool.obtain(null, first, value, index);
            first.p = newFirst;
            first = newFirst;
            size++;
        } else // that element already exists so swap the value
        {
            c.value = value;
        }
    } else {
        first = nodePool.obtain(null, null, value, index);
        size++;
    }
    return null;
}
