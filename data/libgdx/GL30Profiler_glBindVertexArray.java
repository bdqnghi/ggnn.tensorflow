@Override
public void glBindVertexArray(int array) {
    calls++;
    gl30.glBindVertexArray(array);
    check();
}
