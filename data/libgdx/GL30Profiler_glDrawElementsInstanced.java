@Override
public void glDrawElementsInstanced(int mode, int count, int type, int indicesOffset, int instanceCount) {
    vertexCount.put(count);
    drawCalls++;
    calls++;
    gl30.glDrawElementsInstanced(mode, count, type, indicesOffset, instanceCount);
    check();
}
