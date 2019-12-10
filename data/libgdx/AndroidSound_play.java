@Override
public long play(float volume, float pitch, float pan) {
    if (streamIds.size == 8)
        streamIds.pop();
    float leftVolume = volume;
    float rightVolume = volume;
    if (pan < 0) {
        rightVolume *= (1 - Math.abs(pan));
    } else if (pan > 0) {
        leftVolume *= (1 - Math.abs(pan));
    }
    int streamId = soundPool.play(soundId, leftVolume, rightVolume, 1, 0, pitch);
    // standardise error code with other backends
    if (streamId == 0)
        return -1;
    streamIds.insert(0, streamId);
    return streamId;
}
