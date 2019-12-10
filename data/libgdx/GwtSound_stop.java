@Override
public void stop(long soundId) {
    if (soundId >= 0 && sounds[(int) soundId] != null)
        sounds[(int) soundId].stop();
}
