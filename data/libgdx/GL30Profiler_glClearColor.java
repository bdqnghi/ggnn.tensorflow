@Override
public void glClearColor(float red, float green, float blue, float alpha) {
    calls++;
    gl30.glClearColor(red, green, blue, alpha);
    check();
}
