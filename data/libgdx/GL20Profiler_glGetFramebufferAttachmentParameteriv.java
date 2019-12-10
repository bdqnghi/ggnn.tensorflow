@Override
public void glGetFramebufferAttachmentParameteriv(int target, int attachment, int pname, IntBuffer params) {
    calls++;
    gl20.glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
    check();
}
