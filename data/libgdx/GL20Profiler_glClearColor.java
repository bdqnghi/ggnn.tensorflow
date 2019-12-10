@Override
public void glClearColor(float red, float green, float blue, float alpha) {
    calls++;
    gl20.glClearColor(red, green, blue, alpha);
    check();
}
