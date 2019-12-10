@Override
public void glDrawArrays(int mode, int first, int count) {
    vertexCount.put(count);
    drawCalls++;
    calls++;
    gl30.glDrawArrays(mode, first, count);
    check();
}
