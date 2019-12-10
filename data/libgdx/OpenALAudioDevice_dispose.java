public void dispose() {
    if (buffers == null)
        return;
    if (sourceID != -1) {
        audio.freeSource(sourceID);
        sourceID = -1;
    }
    alDeleteBuffers(buffers);
    buffers = null;
}
