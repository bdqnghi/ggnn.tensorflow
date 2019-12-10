@Override
public void setLooping(long soundId, boolean looping) {
    if (audio.noDevice)
        return;
    audio.setSoundLooping(soundId, looping);
}
