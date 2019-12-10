protected void begin() {
    if (color == null)
        color = target.getColor();
    start = color.a;
}
