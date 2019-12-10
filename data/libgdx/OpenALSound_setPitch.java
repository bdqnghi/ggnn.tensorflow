@Override
public void setPitch(long soundId, float pitch) {
    if (audio.noDevice)
        return;
    audio.setSoundPitch(soundId, pitch);
}
