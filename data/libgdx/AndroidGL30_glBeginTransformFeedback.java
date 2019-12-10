// @Override
// public void glGetIntegeri_v(int target, int index, int[] data, int offset) {
// GLES30.glGetIntegeri_v(target, index, data, offset);
// }
// @Override
// public void glGetIntegeri_v(int target, int index, java.nio.IntBuffer data) {
// GLES30.glGetIntegeri_v(target, index, data);
// }
@Override
public void glBeginTransformFeedback(int primitiveMode) {
    GLES30.glBeginTransformFeedback(primitiveMode);
}
