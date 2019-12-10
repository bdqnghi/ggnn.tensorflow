@Override
public void glBlendFunc(int sfactor, int dfactor) {
    calls++;
    gl30.glBlendFunc(sfactor, dfactor);
    check();
}
