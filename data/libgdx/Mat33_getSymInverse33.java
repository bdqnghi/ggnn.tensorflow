// / Returns the zero matrix if singular.
public void getSymInverse33(Mat33 M) {
    float bx = ey.y * ez.z - ey.z * ez.y;
    float by = ey.z * ez.x - ey.x * ez.z;
    float bz = ey.x * ez.y - ey.y * ez.x;
    float det = ex.x * bx + ex.y * by + ex.z * bz;
    if (det != 0.0f) {
        det = 1.0f / det;
    }
    float a11 = ex.x, a12 = ey.x, a13 = ez.x;
    float a22 = ey.y, a23 = ez.y;
    float a33 = ez.z;
    M.ex.x = det * (a22 * a33 - a23 * a23);
    M.ex.y = det * (a13 * a23 - a12 * a33);
    M.ex.z = det * (a12 * a23 - a13 * a22);
    M.ey.x = M.ex.y;
    M.ey.y = det * (a11 * a33 - a13 * a13);
    M.ey.z = det * (a13 * a12 - a11 * a23);
    M.ez.x = M.ex.z;
    M.ez.y = M.ey.z;
    M.ez.z = det * (a11 * a22 - a12 * a12);
}
