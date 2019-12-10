/**
 * @param r the other {@link Rectangle}
 * @return whether this rectangle overlaps the other rectangle.
 */
public boolean overlaps(Rectangle r) {
    return x < r.x + r.width && x + width > r.x && y < r.y + r.height && y + height > r.y;
}
