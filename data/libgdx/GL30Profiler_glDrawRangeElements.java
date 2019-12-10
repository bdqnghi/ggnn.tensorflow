@Override
public void glDrawRangeElements(int mode, int start, int end, int count, int type, int offset) {
    vertexCount.put(count);
    drawCalls++;
    calls++;
    gl30.glDrawRangeElements(mode, start, end, count, type, offset);
    check();
}
