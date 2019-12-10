private float getSmoothingFactor() {
    final DistanceFieldFont font = (DistanceFieldFont) super.getFont();
    return font.getDistanceFieldSmoothing() * font.getScaleX();
}
