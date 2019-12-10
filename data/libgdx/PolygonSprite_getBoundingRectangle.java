/**
 * Returns the bounding axis aligned {@link Rectangle} that bounds this sprite. The rectangles x and y coordinates describe its
 * bottom left corner. If you change the position or size of the sprite, you have to fetch the triangle again for it to be
 * recomputed.
 * @return the bounding Rectangle
 */
public Rectangle getBoundingRectangle() {
    final float[] vertices = getVertices();
    float minx = vertices[0];
    float miny = vertices[1];
    float maxx = vertices[0];
    float maxy = vertices[1];
    for (int i = 5; i < vertices.length; i += 5) {
        float x = vertices[i];
        float y = vertices[i + 1];
        minx = minx > x ? x : minx;
        maxx = maxx < x ? x : maxx;
        miny = miny > y ? y : miny;
        maxy = maxy < y ? y : maxy;
    }
    bounds.x = minx;
    bounds.y = miny;
    bounds.width = maxx - minx;
    bounds.height = maxy - miny;
    return bounds;
}
