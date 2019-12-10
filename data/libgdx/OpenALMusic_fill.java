private boolean fill(int bufferID) {
    tempBuffer.clear();
    int length = read(tempBytes);
    if (length <= 0) {
        if (isLooping) {
            loop();
            renderedSeconds = 0;
            length = read(tempBytes);
            if (length <= 0)
                return false;
        } else
            return false;
    }
    tempBuffer.put(tempBytes, 0, length).flip();
    alBufferData(bufferID, format, tempBuffer, sampleRate);
    return true;
}
