@Override
public void setLooping(long soundId, boolean looping) {
    if (soundId >= 0 && sounds[(int) soundId] != null)
        sounds[(int) soundId].setLooping(looping);
}
