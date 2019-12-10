public void dispose() {
    if (audio.noDevice)
        return;
    if (bufferID == -1)
        return;
    audio.freeBuffer(bufferID);
    alDeleteBuffers(bufferID);
    bufferID = -1;
    audio.forget(this);
}
