@Override
public Dimension getPreferredSize() {
    Dimension dimension = super.getPreferredSize();
    if (image != null) {
        dimension.width = image.getWidth();
        dimension.height = image.getHeight();
    }
    return dimension;
}
