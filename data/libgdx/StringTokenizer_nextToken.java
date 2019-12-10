public String nextToken() {
    if (!hasMoreTokens()) {
        throw new NoSuchElementException();
    }
    String result = next;
    next = null;
    return result;
}
