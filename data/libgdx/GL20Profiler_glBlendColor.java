@Override
public void glBlendColor(float red, float green, float blue, float alpha) {
    calls++;
    gl20.glBlendColor(red, green, blue, alpha);
    check();
}
