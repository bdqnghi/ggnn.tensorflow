@Override
public void ellipse(float width, float height, float innerWidth, float innerHeight, int divisions, float centerX, float centerY, float centerZ, float normalX, float normalY, float normalZ, float tangentX, float tangentY, float tangentZ, float binormalX, float binormalY, float binormalZ, float angleFrom, float angleTo) {
    if (innerWidth <= 0 || innerHeight <= 0) {
        ensureTriangles(divisions + 2, divisions);
    } else if (innerWidth == width && innerHeight == height) {
        ensureVertices(divisions + 1);
        ensureIndices(divisions + 1);
        if (primitiveType != GL20.GL_LINES)
            throw new GdxRuntimeException("Incorrect primitive type : expect GL_LINES because innerWidth == width && innerHeight == height");
    } else {
        ensureRectangles((divisions + 1) * 2, divisions + 1);
    }
    final float ao = MathUtils.degreesToRadians * angleFrom;
    final float step = (MathUtils.degreesToRadians * (angleTo - angleFrom)) / divisions;
    final Vector3 sxEx = tempV1.set(tangentX, tangentY, tangentZ).scl(width * 0.5f);
    final Vector3 syEx = tempV2.set(binormalX, binormalY, binormalZ).scl(height * 0.5f);
    final Vector3 sxIn = tempV3.set(tangentX, tangentY, tangentZ).scl(innerWidth * 0.5f);
    final Vector3 syIn = tempV4.set(binormalX, binormalY, binormalZ).scl(innerHeight * 0.5f);
    VertexInfo currIn = vertTmp3.set(null, null, null, null);
    currIn.hasUV = currIn.hasPosition = currIn.hasNormal = true;
    currIn.uv.set(.5f, .5f);
    currIn.position.set(centerX, centerY, centerZ);
    currIn.normal.set(normalX, normalY, normalZ);
    VertexInfo currEx = vertTmp4.set(null, null, null, null);
    currEx.hasUV = currEx.hasPosition = currEx.hasNormal = true;
    currEx.uv.set(.5f, .5f);
    currEx.position.set(centerX, centerY, centerZ);
    currEx.normal.set(normalX, normalY, normalZ);
    final short center = vertex(currEx);
    float angle = 0f;
    final float us = 0.5f * (innerWidth / width);
    final float vs = 0.5f * (innerHeight / height);
    short i1, i2 = 0, i3 = 0, i4 = 0;
    for (int i = 0; i <= divisions; i++) {
        angle = ao + step * i;
        final float x = MathUtils.cos(angle);
        final float y = MathUtils.sin(angle);
        currEx.position.set(centerX, centerY, centerZ).add(sxEx.x * x + syEx.x * y, sxEx.y * x + syEx.y * y, sxEx.z * x + syEx.z * y);
        currEx.uv.set(.5f + .5f * x, .5f + .5f * y);
        i1 = vertex(currEx);
        if (innerWidth <= 0f || innerHeight <= 0f) {
            if (i != 0)
                triangle(i1, i2, center);
            i2 = i1;
        } else if (innerWidth == width && innerHeight == height) {
            if (i != 0)
                line(i1, i2);
            i2 = i1;
        } else {
            currIn.position.set(centerX, centerY, centerZ).add(sxIn.x * x + syIn.x * y, sxIn.y * x + syIn.y * y, sxIn.z * x + syIn.z * y);
            currIn.uv.set(.5f + us * x, .5f + vs * y);
            i2 = i1;
            i1 = vertex(currIn);
            if (i != 0)
                rect(i1, i2, i4, i3);
            i4 = i2;
            i3 = i1;
        }
    }
}
