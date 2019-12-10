public void setColor(Color color) {
    if (color == null)
        throw new IllegalArgumentException("color cannot be null.");
    this.color = color;
}
