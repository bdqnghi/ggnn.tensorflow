@Override
public void pause(long soundId) {
    if (audio.noDevice)
        return;
    audio.pauseSound(soundId);
}
