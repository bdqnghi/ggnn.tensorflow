@Override
public void resume(long soundId) {
    if (audio.noDevice)
        return;
    audio.resumeSound(soundId);
}
