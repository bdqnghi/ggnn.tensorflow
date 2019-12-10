@Override
public void glClearDepthf(float depth) {
    calls++;
    gl20.glClearDepthf(depth);
    check();
}
