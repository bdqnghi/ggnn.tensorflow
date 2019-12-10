@Override
public Dimension preferredLayoutSize(Container parent) {
    Component component = getCurrentCard(parent);
    return component != null ? component.getPreferredSize() : super.preferredLayoutSize(parent);
}
