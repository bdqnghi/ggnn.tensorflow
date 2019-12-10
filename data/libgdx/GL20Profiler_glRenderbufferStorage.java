@Override
public void glRenderbufferStorage(int target, int internalformat, int width, int height) {
    calls++;
    gl20.glRenderbufferStorage(target, internalformat, width, height);
    check();
}
