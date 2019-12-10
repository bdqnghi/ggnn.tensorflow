@Override
public void glGenTransformFeedbacks(int n, IntBuffer ids) {
    calls++;
    gl30.glGenTransformFeedbacks(n, ids);
    check();
}
