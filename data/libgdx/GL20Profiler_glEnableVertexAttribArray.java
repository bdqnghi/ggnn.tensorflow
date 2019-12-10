@Override
public void glEnableVertexAttribArray(int index) {
    calls++;
    gl20.glEnableVertexAttribArray(index);
    check();
}
