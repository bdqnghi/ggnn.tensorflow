/**
 * Resets the position components of the vertices array based ont he dimensions (preparation for transformation)
 */
protected void resetVertices() {
    float left = -dimensions.x / 2f;
    float right = left + dimensions.x;
    float top = dimensions.y / 2f;
    float bottom = top - dimensions.y;
    // left top
    vertices[X1] = left;
    vertices[Y1] = top;
    vertices[Z1] = 0;
    // right top
    vertices[X2] = right;
    vertices[Y2] = top;
    vertices[Z2] = 0;
    // left bot
    vertices[X3] = left;
    vertices[Y3] = bottom;
    vertices[Z3] = 0;
    // right bot
    vertices[X4] = right;
    vertices[Y4] = bottom;
    vertices[Z4] = 0;
    updated = false;
}
