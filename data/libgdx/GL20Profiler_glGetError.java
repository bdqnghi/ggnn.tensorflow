@Override
public int glGetError() {
    calls++;
    // Errors by glGetError are undetectable
    return gl20.glGetError();
}
