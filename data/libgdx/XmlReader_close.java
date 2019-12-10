protected void close() {
    root = elements.pop();
    current = elements.size > 0 ? elements.peek() : null;
}
