@Override
public void create() {
    font = new BitmapFont();
    batch = new SpriteBatch();
    Matrix4 m1 = new Matrix4();
    Matrix4 m2 = new Matrix4();
    float[] a1 = new float[16];
    float[] a2 = new float[16];
    float[] a3 = new float[16];
    Matrix.setIdentityM(a1, 0);
    Matrix.setIdentityM(a2, 0);
    Matrix.setIdentityM(a3, 0);
    long startTime = System.nanoTime();
    int ops = 0;
    while (System.nanoTime() - startTime < 5000000000l) {
        Matrix.multiplyMM(a1, 0, a2, 0, a3, 0);
        ops++;
    }
    results = "Matrix ops: " + ops + "\n";
    // warm up
    startTime = System.nanoTime();
    ops = 0;
    while (System.nanoTime() - startTime < 2000000000l) {
        m1.mul(m2);
        ops++;
    }
    startTime = System.nanoTime();
    ops = 0;
    while (System.nanoTime() - startTime < 5000000000l) {
        m1.mul(m2);
        ops++;
    }
    results += "Matrix4 ops: " + ops + "\n";
}
