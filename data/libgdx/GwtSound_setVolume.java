@Override
public void setVolume(long soundId, float volume) {
    if (soundId >= 0 && sounds[(int) soundId] != null)
        sounds[(int) soundId].setVolume(volume);
}
