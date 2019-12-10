@Override
public boolean glIsTransformFeedback(int id) {
    calls++;
    final boolean result = gl30.glIsTransformFeedback(id);
    check();
    return result;
}
