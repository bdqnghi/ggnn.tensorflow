@Override
public void setPan(long soundId, float pan, float volume) {
    if (soundId >= 0 && sounds[(int) soundId] != null) {
        sounds[(int) soundId].setPan(pan, volume);
    }
}
