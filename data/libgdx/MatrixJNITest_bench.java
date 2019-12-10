private void bench() {
    Matrix4 mata = new Matrix4();
    Matrix4 matb = new Matrix4();
    long start = TimeUtils.nanoTime();
    for (int i = 0; i < 1000000; i++) {
        mata.mul(matb);
    }
    Gdx.app.log("MatrixJNITest", "java matrix * matrix took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    start = TimeUtils.nanoTime();
    for (int i = 0; i < 1000000; i++) {
        Matrix4.mul(mata.val, matb.val);
    }
    Gdx.app.log("MatrixJNITest", "jni matrix * matrix took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    Vector3 vec = new Vector3();
    start = TimeUtils.nanoTime();
    for (int i = 0; i < 500000; i++) {
        vec.mul(mata);
    }
    Gdx.app.log("MatrixJNITest", "java vecs * matrix took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    float[] fvec = new float[3];
    start = TimeUtils.nanoTime();
    for (int i = 0; i < 500000; i++) {
        Matrix4.mulVec(mata.val, fvec);
    }
    Gdx.app.log("MatrixJNITest", "jni vecs * matrix took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    float[] fvecs = new float[3 * 500000];
    start = TimeUtils.nanoTime();
    Matrix4.mulVec(mata.val, fvecs, 0, 500000, 3);
    Gdx.app.log("MatrixJNITest", "jni bulk vecs * matrix took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    start = TimeUtils.nanoTime();
    for (int i = 0; i < 1000000; i++) {
        mata.inv();
    }
    Gdx.app.log("MatrixJNITest", "java inv(matrix): " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    start = TimeUtils.nanoTime();
    for (int i = 0; i < 1000000; i++) {
        Matrix4.inv(mata.val);
    }
    Gdx.app.log("MatrixJNITest", "jni inv(matrix): " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
