@Override
public void glDrawElements(int mode, int count, int type, int indices) {
    vertexCount.put(count);
    drawCalls++;
    calls++;
    gl20.glDrawElements(mode, count, type, indices);
    check();
}
