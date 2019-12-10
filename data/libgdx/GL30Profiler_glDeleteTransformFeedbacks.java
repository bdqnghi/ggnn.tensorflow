@Override
public void glDeleteTransformFeedbacks(int n, IntBuffer ids) {
    calls++;
    gl30.glDeleteTransformFeedbacks(n, ids);
    check();
}
