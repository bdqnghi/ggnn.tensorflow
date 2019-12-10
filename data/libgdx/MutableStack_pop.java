public final E pop() {
    if (index >= size) {
        extendStack(size * 2);
    }
    return stack[index++];
}
