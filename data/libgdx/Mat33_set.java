public void set(Mat33 mat) {
    Vec3 vec = mat.ex;
    ex.x = vec.x;
    ex.y = vec.y;
    ex.z = vec.z;
    Vec3 vec1 = mat.ey;
    ey.x = vec1.x;
    ey.y = vec1.y;
    ey.z = vec1.z;
    Vec3 vec2 = mat.ez;
    ez.x = vec2.x;
    ez.y = vec2.y;
    ez.z = vec2.z;
}
