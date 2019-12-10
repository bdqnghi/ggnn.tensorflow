public void setUniformMatrix4fv(String name, float[] values, int offset, int length) {
    setUniformMatrix4fv(fetchUniformLocation(name), values, offset, length);
}
