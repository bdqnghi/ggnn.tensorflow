@Override
public void sphere(final Matrix4 transform, float width, float height, float depth, int divisionsU, int divisionsV, float angleUFrom, float angleUTo, float angleVFrom, float angleVTo) {
    // FIXME create better sphere method (- only one vertex for each pole, - position)
    final float hw = width * 0.5f;
    final float hh = height * 0.5f;
    final float hd = depth * 0.5f;
    final float auo = MathUtils.degreesToRadians * angleUFrom;
    final float stepU = (MathUtils.degreesToRadians * (angleUTo - angleUFrom)) / divisionsU;
    final float avo = MathUtils.degreesToRadians * angleVFrom;
    final float stepV = (MathUtils.degreesToRadians * (angleVTo - angleVFrom)) / divisionsV;
    final float us = 1f / divisionsU;
    final float vs = 1f / divisionsV;
    float u = 0f;
    float v = 0f;
    float angleU = 0f;
    float angleV = 0f;
    VertexInfo curr1 = vertTmp3.set(null, null, null, null);
    curr1.hasUV = curr1.hasPosition = curr1.hasNormal = true;
    final int s = divisionsU + 3;
    tmpIndices.clear();
    tmpIndices.ensureCapacity(divisionsU * 2);
    tmpIndices.size = s;
    int tempOffset = 0;
    ensureRectangles((divisionsV + 1) * (divisionsU + 1), divisionsV * divisionsU);
    for (int iv = 0; iv <= divisionsV; iv++) {
        angleV = avo + stepV * iv;
        v = vs * iv;
        final float t = MathUtils.sin(angleV);
        final float h = MathUtils.cos(angleV) * hh;
        for (int iu = 0; iu <= divisionsU; iu++) {
            angleU = auo + stepU * iu;
            u = 1f - us * iu;
            curr1.position.set(MathUtils.cos(angleU) * hw * t, h, MathUtils.sin(angleU) * hd * t).mul(transform);
            curr1.normal.set(curr1.position).nor();
            curr1.uv.set(u, v);
            tmpIndices.set(tempOffset, vertex(curr1));
            final int o = tempOffset + s;
            if (// FIXME don't duplicate lines and points
            (iv > 0) && (iu > 0))
                rect(tmpIndices.get(tempOffset), tmpIndices.get((o - 1) % s), tmpIndices.get((o - (divisionsU + 2)) % s), tmpIndices.get((o - (divisionsU + 1)) % s));
            tempOffset = (tempOffset + 1) % tmpIndices.size;
        }
    }
}
