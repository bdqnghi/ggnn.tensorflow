@Override
public int glGetError() {
    calls++;
    // Errors by glGetError are undetectable
    return gl30.glGetError();
}
