protected static JFrame findJFrame(Component component) {
    Container parent = component.getParent();
    while (parent != null) {
        if (parent instanceof JFrame) {
            return (JFrame) parent;
        }
        parent = parent.getParent();
    }
    return null;
}
