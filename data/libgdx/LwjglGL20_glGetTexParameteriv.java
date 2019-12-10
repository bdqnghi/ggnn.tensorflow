public void glGetTexParameteriv(int target, int pname, IntBuffer params) {
    GL11.glGetTexParameter(target, pname, params);
}
