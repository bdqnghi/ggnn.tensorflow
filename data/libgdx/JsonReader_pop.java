protected void pop() {
    root = elements.pop();
    if (current.size > 0)
        lastChild.pop();
    current = elements.size > 0 ? elements.peek() : null;
}
