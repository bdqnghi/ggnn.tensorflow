public <K> K getCurrentCard(Container container) {
    Component[] c = container.getComponents();
    int i = 0;
    int j = c.length;
    while (i < j) {
        if (c[i].isVisible()) {
            return (K) c[i];
        } else
            i++;
    }
    return null;
}
