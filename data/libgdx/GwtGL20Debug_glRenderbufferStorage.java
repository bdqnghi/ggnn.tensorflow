@Override
public void glRenderbufferStorage(int target, int internalformat, int width, int height) {
    super.glRenderbufferStorage(target, internalformat, width, height);
    checkError();
}
