protected void begin() {
    if (color == null)
        color = target.getColor();
    startR = color.r;
    startG = color.g;
    startB = color.b;
    startA = color.a;
}
