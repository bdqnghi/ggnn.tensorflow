@Override
public void glBeginTransformFeedback(int primitiveMode) {
    calls++;
    gl30.glBeginTransformFeedback(primitiveMode);
    check();
}
