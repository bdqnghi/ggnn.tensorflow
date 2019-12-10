@Override
public void resume(long soundId) {
    if (soundId >= 0 && sounds[(int) soundId] != null)
        sounds[(int) soundId].resume();
}
