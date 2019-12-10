private void extendStack(int argSize) {
    E[] newStack = newArray(argSize);
    if (stack != null) {
        System.arraycopy(stack, 0, newStack, 0, size);
    }
    for (int i = 0; i < newStack.length; i++) {
        newStack[i] = newInstance();
    }
    stack = newStack;
    size = newStack.length;
}
