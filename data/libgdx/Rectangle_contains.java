/**
 * @param rectangle the other {@link Rectangle}.
 * @return whether the other rectangle is contained in this rectangle.
 */
public boolean contains(Rectangle rectangle) {
    float xmin = rectangle.x;
    float xmax = xmin + rectangle.width;
    float ymin = rectangle.y;
    float ymax = ymin + rectangle.height;
    return ((xmin > x && xmin < x + width) && (xmax > x && xmax < x + width)) && ((ymin > y && ymin < y + height) && (ymax > y && ymax < y + height));
}
