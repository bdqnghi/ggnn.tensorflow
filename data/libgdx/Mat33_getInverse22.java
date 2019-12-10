public void getInverse22(Mat33 M) {
    float a = ex.x, b = ey.x, c = ex.y, d = ey.y;
    float det = a * d - b * c;
    if (det != 0.0f) {
        det = 1.0f / det;
    }
    M.ex.x = det * d;
    M.ey.x = -det * b;
    M.ex.z = 0.0f;
    M.ex.y = -det * c;
    M.ey.y = det * a;
    M.ey.z = 0.0f;
    M.ez.x = 0.0f;
    M.ez.y = 0.0f;
    M.ez.z = 0.0f;
}
