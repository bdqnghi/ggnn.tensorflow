@Override
public void setColor(final Color color) {
    this.color.set(!(hasColor = (color != null)) ? Color.WHITE : color);
}
