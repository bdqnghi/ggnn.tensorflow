/**
 * Returns the packed vertices, colors, and texture coordinates for this sprite.
 */
public float[] getVertices() {
    if (dirty) {
        dirty = false;
        float[] vertices = this.vertices;
        float localX = -originX;
        float localY = -originY;
        float localX2 = localX + width;
        float localY2 = localY + height;
        float worldOriginX = this.x - localX;
        float worldOriginY = this.y - localY;
        if (scaleX != 1 || scaleY != 1) {
            localX *= scaleX;
            localY *= scaleY;
            localX2 *= scaleX;
            localY2 *= scaleY;
        }
        if (rotation != 0) {
            final float cos = MathUtils.cosDeg(rotation);
            final float sin = MathUtils.sinDeg(rotation);
            final float localXCos = localX * cos;
            final float localXSin = localX * sin;
            final float localYCos = localY * cos;
            final float localYSin = localY * sin;
            final float localX2Cos = localX2 * cos;
            final float localX2Sin = localX2 * sin;
            final float localY2Cos = localY2 * cos;
            final float localY2Sin = localY2 * sin;
            final float x1 = localXCos - localYSin + worldOriginX;
            final float y1 = localYCos + localXSin + worldOriginY;
            vertices[X1] = x1;
            vertices[Y1] = y1;
            final float x2 = localXCos - localY2Sin + worldOriginX;
            final float y2 = localY2Cos + localXSin + worldOriginY;
            vertices[X2] = x2;
            vertices[Y2] = y2;
            final float x3 = localX2Cos - localY2Sin + worldOriginX;
            final float y3 = localY2Cos + localX2Sin + worldOriginY;
            vertices[X3] = x3;
            vertices[Y3] = y3;
            vertices[X4] = x1 + (x3 - x2);
            vertices[Y4] = y3 - (y2 - y1);
        } else {
            final float x1 = localX + worldOriginX;
            final float y1 = localY + worldOriginY;
            final float x2 = localX2 + worldOriginX;
            final float y2 = localY2 + worldOriginY;
            vertices[X1] = x1;
            vertices[Y1] = y1;
            vertices[X2] = x1;
            vertices[Y2] = y2;
            vertices[X3] = x2;
            vertices[Y3] = y2;
            vertices[X4] = x2;
            vertices[Y4] = y1;
        }
    }
    return vertices;
}
