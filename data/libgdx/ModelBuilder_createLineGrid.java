/**
 * Convenience method to create a model which represents a grid of lines on the XZ plane. The resources the Material might
 * contain are not managed, use {@link Model#manageDisposable(Disposable)} to add those to the model.
 * @param xDivisions row count along x axis.
 * @param zDivisions row count along z axis.
 * @param xSize Length of a single row on x.
 * @param zSize Length of a single row on z.
 */
public Model createLineGrid(int xDivisions, int zDivisions, float xSize, float zSize, Material material, long attributes) {
    begin();
    MeshPartBuilder partBuilder = part("lines", GL20.GL_LINES, attributes, material);
    float xlength = xDivisions * xSize, zlength = zDivisions * zSize, hxlength = xlength / 2, hzlength = zlength / 2;
    float x1 = -hxlength, y1 = 0, z1 = hzlength, x2 = -hxlength, y2 = 0, z2 = -hzlength;
    for (int i = 0; i <= xDivisions; ++i) {
        partBuilder.line(x1, y1, z1, x2, y2, z2);
        x1 += xSize;
        x2 += xSize;
    }
    x1 = -hxlength;
    y1 = 0;
    z1 = -hzlength;
    x2 = hxlength;
    y2 = 0;
    z2 = -hzlength;
    for (int j = 0; j <= zDivisions; ++j) {
        partBuilder.line(x1, y1, z1, x2, y2, z2);
        z1 += zSize;
        z2 += zSize;
    }
    return end();
}
