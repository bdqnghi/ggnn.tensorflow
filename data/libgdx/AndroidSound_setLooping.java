@Override
public void setLooping(long soundId, boolean looping) {
    soundPool.setLoop((int) soundId, looping ? -1 : 0);
}
