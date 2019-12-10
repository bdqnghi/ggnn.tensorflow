@Override
public void pause(long soundId) {
    if (soundId >= 0 && sounds[(int) soundId] != null)
        sounds[(int) soundId].pause();
}
