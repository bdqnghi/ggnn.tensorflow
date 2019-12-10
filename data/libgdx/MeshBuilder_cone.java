@Override
public void cone(float width, float height, float depth, int divisions, float angleFrom, float angleTo) {
    // FIXME create better cylinder method (- axis on which to create the cone (matrix?))
    ensureTriangles(divisions + 2, divisions);
    final float hw = width * 0.5f;
    final float hh = height * 0.5f;
    final float hd = depth * 0.5f;
    final float ao = MathUtils.degreesToRadians * angleFrom;
    final float step = (MathUtils.degreesToRadians * (angleTo - angleFrom)) / divisions;
    final float us = 1f / divisions;
    float u = 0f;
    float angle = 0f;
    VertexInfo curr1 = vertTmp3.set(null, null, null, null);
    curr1.hasUV = curr1.hasPosition = curr1.hasNormal = true;
    VertexInfo curr2 = vertTmp4.set(null, null, null, null).setPos(0, hh, 0).setNor(0, 1, 0).setUV(0.5f, 0);
    final short base = vertex(curr2);
    short i1, i2 = 0;
    for (int i = 0; i <= divisions; i++) {
        angle = ao + step * i;
        u = 1f - us * i;
        curr1.position.set(MathUtils.cos(angle) * hw, 0f, MathUtils.sin(angle) * hd);
        curr1.normal.set(curr1.position).nor();
        curr1.position.y = -hh;
        curr1.uv.set(u, 1);
        i1 = vertex(curr1);
        // FIXME don't duplicate lines and points
        if (i != 0)
            triangle(base, i1, i2);
        i2 = i1;
    }
    ellipse(width, depth, 0, 0, divisions, 0, -hh, 0, 0, -1, 0, -1, 0, 0, 0, 0, 1, 180f - angleTo, 180f - angleFrom);
}
