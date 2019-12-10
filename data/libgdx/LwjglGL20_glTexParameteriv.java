public void glTexParameteriv(int target, int pname, IntBuffer params) {
    GL11.glTexParameter(target, pname, params);
}
