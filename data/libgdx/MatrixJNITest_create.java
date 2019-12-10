@Override
public void create() {
    Matrix4 mat1 = new Matrix4();
    Matrix4 mat2 = new Matrix4();
    Matrix4 mat3 = new Matrix4();
    Vector3 vec = new Vector3(1, 2, 3);
    float[] fvec = { 1, 2, 3 };
    float[] fvecs = { 1, 2, 3, 0, 0, 1, 2, 3, 0, 0, 1, 2, 3, 0, 0 };
    mat1.setToRotation(0, 1, 0, 45);
    mat2.setToRotation(1, 0, 0, 45);
    vec.mul(mat1);
    Matrix4.mulVec(mat1.val, fvec);
    Matrix4.mulVec(mat1.val, fvecs, 0, 3, 5);
    check(vec, fvec);
    check(vec, fvecs, 3, 5);
    vec.prj(mat1);
    Matrix4.prj(mat1.val, fvec);
    Matrix4.prj(mat1.val, fvecs, 0, 3, 5);
    check(vec, fvec);
    check(vec, fvecs, 3, 5);
    vec.rot(mat1);
    Matrix4.rot(mat1.val, fvec);
    Matrix4.rot(mat1.val, fvecs, 0, 3, 5);
    check(vec, fvec);
    check(vec, fvecs, 3, 5);
    if (mat1.det() != Matrix4.det(mat1.val))
        throw new GdxRuntimeException("det doesn't work");
    mat2.set(mat1);
    mat1.inv();
    Matrix4.inv(mat2.val);
    check(mat1, mat2);
    mat3.set(mat1);
    mat1.mul(mat2);
    Matrix4.mul(mat3.val, mat2.val);
    check(mat1, mat3);
    bench();
    System.out.println("All tests passed.");
}
