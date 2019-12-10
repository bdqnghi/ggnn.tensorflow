@Override
public void glInvalidateFramebuffer(int target, int numAttachments, IntBuffer attachments) {
    calls++;
    gl30.glInvalidateFramebuffer(target, numAttachments, attachments);
    check();
}
