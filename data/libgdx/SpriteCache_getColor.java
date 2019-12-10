public Color getColor() {
    int intBits = NumberUtils.floatToIntColor(color);
    Color color = this.tempColor;
    color.r = (intBits & 0xff) / 255f;
    color.g = ((intBits >>> 8) & 0xff) / 255f;
    color.b = ((intBits >>> 16) & 0xff) / 255f;
    color.a = ((intBits >>> 24) & 0xff) / 255f;
    return color;
}
