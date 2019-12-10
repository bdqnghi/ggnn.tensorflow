@Override
public void glGetFramebufferAttachmentParameteriv(int target, int attachment, int pname, IntBuffer params) {
    super.glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
    checkError();
}
