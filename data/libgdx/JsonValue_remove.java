public void remove() {
    if (current.prev == null) {
        child = current.next;
        if (child != null)
            child.prev = null;
    } else {
        current.prev.next = current.next;
        if (current.next != null)
            current.next.prev = current.prev;
    }
    size--;
}
