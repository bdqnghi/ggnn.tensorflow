@Override
public void glDrawArraysInstanced(int mode, int first, int count, int instanceCount) {
    vertexCount.put(count);
    drawCalls++;
    calls++;
    gl30.glDrawArraysInstanced(mode, first, count, instanceCount);
    check();
}
