@Override
public void glClearColor(float red, float green, float blue, float alpha) {
    super.glClearColor(red, green, blue, alpha);
    checkError();
}
