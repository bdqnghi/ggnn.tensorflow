@Override
public void glResumeTransformFeedback() {
    calls++;
    gl30.glResumeTransformFeedback();
    check();
}
