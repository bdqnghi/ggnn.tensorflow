public void glTexParameterfv(int target, int pname, FloatBuffer params) {
    GL11.glTexParameter(target, pname, params);
}
