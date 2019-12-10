private void addChild(String name, JsonValue child) {
    child.setName(name);
    if (current == null) {
        current = child;
        root = child;
    } else if (current.isArray() || current.isObject()) {
        child.parent = current;
        if (current.size == 0)
            current.child = child;
        else {
            JsonValue last = lastChild.pop();
            last.next = child;
            child.prev = last;
        }
        lastChild.add(child);
        current.size++;
    } else
        root = current;
}
