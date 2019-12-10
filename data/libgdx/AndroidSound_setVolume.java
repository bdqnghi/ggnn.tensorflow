@Override
public void setVolume(long soundId, float volume) {
    soundPool.setVolume((int) soundId, volume, volume);
}
