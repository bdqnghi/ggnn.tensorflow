@Override
public void glGenTextures(int n, IntBuffer textures) {
    super.glGenTextures(n, textures);
    checkError();
}
