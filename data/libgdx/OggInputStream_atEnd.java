public boolean atEnd() {
    return endOfStream && (readIndex >= pcmBuffer.position());
}
