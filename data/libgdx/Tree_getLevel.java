public int getLevel() {
    int level = 0;
    Node current = this;
    do {
        level++;
        current = current.getParent();
    } while (current != null);
    return level;
}
