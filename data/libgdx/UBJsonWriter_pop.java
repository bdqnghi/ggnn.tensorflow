protected UBJsonWriter pop(boolean silent) throws IOException {
    if (named)
        throw new IllegalStateException("Expected an object, array, or value since a name was set.");
    if (silent)
        stack.pop();
    else
        stack.pop().close();
    current = stack.size == 0 ? null : stack.peek();
    return this;
}
