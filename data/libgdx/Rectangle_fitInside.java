/**
 * Fits this rectangle into another rectangle while maintaining aspect ratio. This scales and centers the rectangle to the
 * other rectangle (e.g. Scaling a texture within a arbitrary cell without squeezing)
 * @param rect the other rectangle to fit this rectangle inside
 * @return this rectangle for chaining
 * @see Scaling
 */
public Rectangle fitInside(Rectangle rect) {
    float ratio = getAspectRatio();
    if (ratio < rect.getAspectRatio()) {
        // Taller than wide
        setSize(rect.height * ratio, rect.height);
    } else {
        // Wider than tall
        setSize(rect.width, rect.width / ratio);
    }
    setPosition((rect.x + rect.width / 2) - width / 2, (rect.y + rect.height / 2) - height / 2);
    return this;
}
