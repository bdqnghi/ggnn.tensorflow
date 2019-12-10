private boolean isWithinTapSquare(float x, float y, float centerX, float centerY) {
    return Math.abs(x - centerX) < tapSquareSize && Math.abs(y - centerY) < tapSquareSize;
}
