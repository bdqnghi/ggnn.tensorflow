public void push(int i) {
    if (position == size) {
        int[] old = stack;
        stack = new int[size * 2];
        size = stack.length;
        System.arraycopy(old, 0, stack, 0, old.length);
    }
    stack[position++] = i;
}
