// @Override
// public void glInvalidateFramebuffer(int target, int numAttachments, int[] attachments, int offset) {
// GLES30.glInvalidateFramebuffer(target, numAttachments, attachments, offset);
// }
@Override
public void glInvalidateFramebuffer(int target, int numAttachments, java.nio.IntBuffer attachments) {
    GLES30.glInvalidateFramebuffer(target, numAttachments, attachments);
}
