// 
// @Override
// public void glInvalidateSubFramebuffer(int target, int numAttachments, int[] attachments, int offset, int x, int y, int width,
// int height) {
// GLES30.glInvalidateSubFramebuffer(target, numAttachments, attachments, offset, x, y, width, height);
// }
@Override
public void glInvalidateSubFramebuffer(int target, int numAttachments, java.nio.IntBuffer attachments, int x, int y, int width, int height) {
    GLES30.glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}
