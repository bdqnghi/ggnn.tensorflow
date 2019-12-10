@Override
public void stop(long soundId) {
    if (audio.noDevice)
        return;
    audio.stopSound(soundId);
}
