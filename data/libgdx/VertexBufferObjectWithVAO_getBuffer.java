@Override
public FloatBuffer getBuffer() {
    isDirty = true;
    return buffer;
}
