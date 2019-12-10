/**
 * Transforms the position component of the vertices using properties such as position, scale, etc.
 */
protected void transformVertices() {
    /**
     * It would be possible to also load the x,y,z into a Vector3 and apply all the transformations using already existing
     * methods. Especially the quaternion rotation already exists in the Quaternion class, it then would look like this:
     * ----------------------------------------------------------------------------------------------------
     * v3.set(vertices[xIndex] * scale.x, vertices[yIndex] * scale.y, vertices[zIndex]); rotation.transform(v3);
     * v3.add(position); vertices[xIndex] = v3.x; vertices[yIndex] = v3.y; vertices[zIndex] = v3.z;
     * ---------------------------------------------------------------------------------------------------- However, a half ass
     * benchmark with dozens of thousands decals showed that doing it "by hand", as done here, is about 10% faster. So while
     * duplicate code should be avoided for maintenance reasons etc. the performance gain is worth it. The math doesn't change.
     */
    float x, y, z, w;
    float tx, ty;
    if (transformationOffset != null) {
        tx = -transformationOffset.x;
        ty = -transformationOffset.y;
    } else {
        tx = ty = 0;
    }
    /**
     * Transform the first vertex
     */
    // first apply the scale to the vector
    x = (vertices[X1] + tx) * scale.x;
    y = (vertices[Y1] + ty) * scale.y;
    z = vertices[Z1];
    // then transform the vector using the rotation quaternion
    vertices[X1] = rotation.w * x + rotation.y * z - rotation.z * y;
    vertices[Y1] = rotation.w * y + rotation.z * x - rotation.x * z;
    vertices[Z1] = rotation.w * z + rotation.x * y - rotation.y * x;
    w = -rotation.x * x - rotation.y * y - rotation.z * z;
    rotation.conjugate();
    x = vertices[X1];
    y = vertices[Y1];
    z = vertices[Z1];
    vertices[X1] = w * rotation.x + x * rotation.w + y * rotation.z - z * rotation.y;
    vertices[Y1] = w * rotation.y + y * rotation.w + z * rotation.x - x * rotation.z;
    vertices[Z1] = w * rotation.z + z * rotation.w + x * rotation.y - y * rotation.x;
    // <- don't forget to conjugate the rotation back to normal
    rotation.conjugate();
    // finally translate the vector according to position
    vertices[X1] += position.x - tx;
    vertices[Y1] += position.y - ty;
    vertices[Z1] += position.z;
    /**
     * Transform the second vertex
     */
    // first apply the scale to the vector
    x = (vertices[X2] + tx) * scale.x;
    y = (vertices[Y2] + ty) * scale.y;
    z = vertices[Z2];
    // then transform the vector using the rotation quaternion
    vertices[X2] = rotation.w * x + rotation.y * z - rotation.z * y;
    vertices[Y2] = rotation.w * y + rotation.z * x - rotation.x * z;
    vertices[Z2] = rotation.w * z + rotation.x * y - rotation.y * x;
    w = -rotation.x * x - rotation.y * y - rotation.z * z;
    rotation.conjugate();
    x = vertices[X2];
    y = vertices[Y2];
    z = vertices[Z2];
    vertices[X2] = w * rotation.x + x * rotation.w + y * rotation.z - z * rotation.y;
    vertices[Y2] = w * rotation.y + y * rotation.w + z * rotation.x - x * rotation.z;
    vertices[Z2] = w * rotation.z + z * rotation.w + x * rotation.y - y * rotation.x;
    // <- don't forget to conjugate the rotation back to normal
    rotation.conjugate();
    // finally translate the vector according to position
    vertices[X2] += position.x - tx;
    vertices[Y2] += position.y - ty;
    vertices[Z2] += position.z;
    /**
     * Transform the third vertex
     */
    // first apply the scale to the vector
    x = (vertices[X3] + tx) * scale.x;
    y = (vertices[Y3] + ty) * scale.y;
    z = vertices[Z3];
    // then transform the vector using the rotation quaternion
    vertices[X3] = rotation.w * x + rotation.y * z - rotation.z * y;
    vertices[Y3] = rotation.w * y + rotation.z * x - rotation.x * z;
    vertices[Z3] = rotation.w * z + rotation.x * y - rotation.y * x;
    w = -rotation.x * x - rotation.y * y - rotation.z * z;
    rotation.conjugate();
    x = vertices[X3];
    y = vertices[Y3];
    z = vertices[Z3];
    vertices[X3] = w * rotation.x + x * rotation.w + y * rotation.z - z * rotation.y;
    vertices[Y3] = w * rotation.y + y * rotation.w + z * rotation.x - x * rotation.z;
    vertices[Z3] = w * rotation.z + z * rotation.w + x * rotation.y - y * rotation.x;
    // <- don't forget to conjugate the rotation back to normal
    rotation.conjugate();
    // finally translate the vector according to position
    vertices[X3] += position.x - tx;
    vertices[Y3] += position.y - ty;
    vertices[Z3] += position.z;
    /**
     * Transform the fourth vertex
     */
    // first apply the scale to the vector
    x = (vertices[X4] + tx) * scale.x;
    y = (vertices[Y4] + ty) * scale.y;
    z = vertices[Z4];
    // then transform the vector using the rotation quaternion
    vertices[X4] = rotation.w * x + rotation.y * z - rotation.z * y;
    vertices[Y4] = rotation.w * y + rotation.z * x - rotation.x * z;
    vertices[Z4] = rotation.w * z + rotation.x * y - rotation.y * x;
    w = -rotation.x * x - rotation.y * y - rotation.z * z;
    rotation.conjugate();
    x = vertices[X4];
    y = vertices[Y4];
    z = vertices[Z4];
    vertices[X4] = w * rotation.x + x * rotation.w + y * rotation.z - z * rotation.y;
    vertices[Y4] = w * rotation.y + y * rotation.w + z * rotation.x - x * rotation.z;
    vertices[Z4] = w * rotation.z + z * rotation.w + x * rotation.y - y * rotation.x;
    // <- don't forget to conjugate the rotation back to normal
    rotation.conjugate();
    // finally translate the vector according to position
    vertices[X4] += position.x - tx;
    vertices[Y4] += position.y - ty;
    vertices[Z4] += position.z;
    updated = true;
}
