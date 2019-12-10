public final void push(E argObject) {
    assert (index > 0);
    stack[--index] = argObject;
}
