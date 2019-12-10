@Override
public void glDepthFunc(int func) {
    calls++;
    gl30.glDepthFunc(func);
    check();
}
