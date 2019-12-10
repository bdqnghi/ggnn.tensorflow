@Override
public void setPitch(long soundId, float pitch) {
    soundPool.setRate((int) soundId, pitch);
}
