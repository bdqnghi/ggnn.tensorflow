@Override
public void setPan(long soundId, float pan, float volume) {
    float leftVolume = volume;
    float rightVolume = volume;
    if (pan < 0) {
        rightVolume *= (1 - Math.abs(pan));
    } else if (pan > 0) {
        leftVolume *= (1 - Math.abs(pan));
    }
    soundPool.setVolume((int) soundId, leftVolume, rightVolume);
}
