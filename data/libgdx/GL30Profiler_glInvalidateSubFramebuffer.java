@Override
public void glInvalidateSubFramebuffer(int target, int numAttachments, IntBuffer attachments, int x, int y, int width, int height) {
    calls++;
    gl30.glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
    check();
}
