public long play(float volume, float pitch, float pan, boolean loop) {
    if (streamIds.size == 8)
        streamIds.pop();
    ALSource soundSource = OALSimpleAudio.sharedInstance().playBuffer(soundBuffer, volume, pitch, pan, loop);
    if (soundSource == null)
        return -1;
    if (soundSource.getSourceId() == -1)
        return -1;
    streamIds.insert(0, soundSource.getSourceId());
    return soundSource.getSourceId();
}
