/**
 * <p>
 * Sets the Quaternion from the given x-, y- and z-axis.
 * </p>
 *
 * <p>
 * Taken from Bones framework for JPCT, see http://www.aptalkarga.com/bones/ which in turn took it from Graphics Gem code at
 * ftp://ftp.cis.upenn.edu/pub/graphics/shoemake/quatut.ps.Z.
 * </p>
 *
 * @param normalizeAxes whether to normalize the axes (necessary when they contain scaling)
 * @param xx x-axis x-coordinate
 * @param xy x-axis y-coordinate
 * @param xz x-axis z-coordinate
 * @param yx y-axis x-coordinate
 * @param yy y-axis y-coordinate
 * @param yz y-axis z-coordinate
 * @param zx z-axis x-coordinate
 * @param zy z-axis y-coordinate
 * @param zz z-axis z-coordinate
 */
public Quaternion setFromAxes(boolean normalizeAxes, float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz) {
    if (normalizeAxes) {
        final float lx = 1f / Vector3.len(xx, xy, xz);
        final float ly = 1f / Vector3.len(yx, yy, yz);
        final float lz = 1f / Vector3.len(zx, zy, zz);
        xx *= lx;
        xy *= lx;
        xz *= lx;
        yx *= ly;
        yy *= ly;
        yz *= ly;
        zx *= lz;
        zy *= lz;
        zz *= lz;
    }
    // the trace is the sum of the diagonal elements; see
    // http://mathworld.wolfram.com/MatrixTrace.html
    final float t = xx + yy + zz;
    // we protect the division by s by ensuring that s>=1
    if (t >= 0) {
        // |w| >= .5
        // |s|>=1 ...
        float s = (float) Math.sqrt(t + 1);
        w = 0.5f * s;
        // so this division isn't bad
        s = 0.5f / s;
        x = (zy - yz) * s;
        y = (xz - zx) * s;
        z = (yx - xy) * s;
    } else if ((xx > yy) && (xx > zz)) {
        // |s|>=1
        float s = (float) Math.sqrt(1.0 + xx - yy - zz);
        // |x| >= .5
        x = s * 0.5f;
        s = 0.5f / s;
        y = (yx + xy) * s;
        z = (xz + zx) * s;
        w = (zy - yz) * s;
    } else if (yy > zz) {
        // |s|>=1
        float s = (float) Math.sqrt(1.0 + yy - xx - zz);
        // |y| >= .5
        y = s * 0.5f;
        s = 0.5f / s;
        x = (yx + xy) * s;
        z = (zy + yz) * s;
        w = (xz - zx) * s;
    } else {
        // |s|>=1
        float s = (float) Math.sqrt(1.0 + zz - xx - yy);
        // |z| >= .5
        z = s * 0.5f;
        s = 0.5f / s;
        x = (xz + zx) * s;
        y = (zy + yz) * s;
        w = (yx - xy) * s;
    }
    return this;
}
