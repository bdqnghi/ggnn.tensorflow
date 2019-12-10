@Override
public void glClearDepthf(float depth) {
    calls++;
    gl30.glClearDepthf(depth);
    check();
}
