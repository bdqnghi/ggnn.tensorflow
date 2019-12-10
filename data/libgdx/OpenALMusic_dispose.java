public void dispose() {
    stop();
    if (audio.noDevice)
        return;
    if (buffers == null)
        return;
    alDeleteBuffers(buffers);
    buffers = null;
    onCompletionListener = null;
}
