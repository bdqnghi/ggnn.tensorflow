@Override
public void glDepthFunc(int func) {
    calls++;
    gl20.glDepthFunc(func);
    check();
}
