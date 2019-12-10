/**
 * Fits this rectangle around another rectangle while maintaining aspect ratio. This scales and centers the rectangle to the
 * other rectangle (e.g. Having a camera translate and scale to show a given area)
 * @param rect the other rectangle to fit this rectangle around
 * @return this rectangle for chaining
 * @see Scaling
 */
public Rectangle fitOutside(Rectangle rect) {
    float ratio = getAspectRatio();
    if (ratio > rect.getAspectRatio()) {
        // Wider than tall
        setSize(rect.height * ratio, rect.height);
    } else {
        // Taller than wide
        setSize(rect.width, rect.width / ratio);
    }
    setPosition((rect.x + rect.width / 2) - width / 2, (rect.y + rect.height / 2) - height / 2);
    return this;
}
