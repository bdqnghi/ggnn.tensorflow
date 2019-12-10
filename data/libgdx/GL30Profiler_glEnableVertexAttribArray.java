@Override
public void glEnableVertexAttribArray(int index) {
    calls++;
    gl30.glEnableVertexAttribArray(index);
    check();
}
