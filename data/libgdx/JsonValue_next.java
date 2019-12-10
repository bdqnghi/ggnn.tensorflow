public JsonValue next() {
    current = entry;
    if (current == null)
        throw new NoSuchElementException();
    entry = current.next;
    return current;
}
