public JsonWriter pop() throws IOException {
    if (named)
        throw new IllegalStateException("Expected an object, array, or value since a name was set.");
    stack.pop().close();
    current = stack.size == 0 ? null : stack.peek();
    return this;
}
