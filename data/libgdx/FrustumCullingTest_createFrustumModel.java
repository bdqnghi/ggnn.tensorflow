public static Model createFrustumModel(final Vector3... p) {
    ModelBuilder builder = new ModelBuilder();
    builder.begin();
    MeshPartBuilder mpb = builder.part("", GL20.GL_LINES, Usage.Position | Usage.Normal, new Material(new ColorAttribute(ColorAttribute.Diffuse, Color.WHITE)));
    mpb.vertex(p[0].x, p[0].y, p[0].z, 0, 0, 1, p[1].x, p[1].y, p[1].z, 0, 0, 1, p[2].x, p[2].y, p[2].z, 0, 0, 1, p[3].x, p[3].y, p[3].z, 0, 0, // near
    1, p[4].x, p[4].y, p[4].z, 0, 0, -1, p[5].x, p[5].y, p[5].z, 0, 0, -1, p[6].x, p[6].y, p[6].z, 0, 0, -1, p[7].x, p[7].y, p[7].z, 0, 0, -1);
    mpb.index((short) 0, (short) 1, (short) 1, (short) 2, (short) 2, (short) 3, (short) 3, (short) 0);
    mpb.index((short) 4, (short) 5, (short) 5, (short) 6, (short) 6, (short) 7, (short) 7, (short) 4);
    mpb.index((short) 0, (short) 4, (short) 1, (short) 5, (short) 2, (short) 6, (short) 3, (short) 7);
    return builder.end();
}
