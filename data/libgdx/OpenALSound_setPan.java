@Override
public void setPan(long soundId, float pan, float volume) {
    if (audio.noDevice)
        return;
    audio.setSoundPan(soundId, pan, volume);
}
