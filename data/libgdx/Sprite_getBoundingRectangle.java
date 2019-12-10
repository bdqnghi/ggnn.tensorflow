/**
 * Returns the bounding axis aligned {@link Rectangle} that bounds this sprite. The rectangles x and y coordinates describe its
 * bottom left corner. If you change the position or size of the sprite, you have to fetch the triangle again for it to be
 * recomputed.
 *
 * @return the bounding Rectangle
 */
public Rectangle getBoundingRectangle() {
    final float[] vertices = getVertices();
    float minx = vertices[X1];
    float miny = vertices[Y1];
    float maxx = vertices[X1];
    float maxy = vertices[Y1];
    minx = minx > vertices[X2] ? vertices[X2] : minx;
    minx = minx > vertices[X3] ? vertices[X3] : minx;
    minx = minx > vertices[X4] ? vertices[X4] : minx;
    maxx = maxx < vertices[X2] ? vertices[X2] : maxx;
    maxx = maxx < vertices[X3] ? vertices[X3] : maxx;
    maxx = maxx < vertices[X4] ? vertices[X4] : maxx;
    miny = miny > vertices[Y2] ? vertices[Y2] : miny;
    miny = miny > vertices[Y3] ? vertices[Y3] : miny;
    miny = miny > vertices[Y4] ? vertices[Y4] : miny;
    maxy = maxy < vertices[Y2] ? vertices[Y2] : maxy;
    maxy = maxy < vertices[Y3] ? vertices[Y3] : maxy;
    maxy = maxy < vertices[Y4] ? vertices[Y4] : maxy;
    if (bounds == null)
        bounds = new Rectangle();
    bounds.x = minx;
    bounds.y = miny;
    bounds.width = maxx - minx;
    bounds.height = maxy - miny;
    return bounds;
}
