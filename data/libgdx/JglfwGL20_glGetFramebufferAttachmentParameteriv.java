public void glGetFramebufferAttachmentParameteriv(int target, int attachment, int pname, IntBuffer params) {
    GL.glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params, getPosition(params));
}
