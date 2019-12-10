@Override
public void setVolume(long soundId, float volume) {
    if (audio.noDevice)
        return;
    audio.setSoundGain(soundId, volume);
}
