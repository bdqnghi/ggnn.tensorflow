@Override
public void glBlendFunc(int sfactor, int dfactor) {
    calls++;
    gl20.glBlendFunc(sfactor, dfactor);
    check();
}
