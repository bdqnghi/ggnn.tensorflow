@Override
public void setPan(float pan, float volume) {
    sound.setPan((int) (pan * 100));
    sound.setVolume((int) (volume * 100));
    this.pan = pan;
    this.volume = volume;
}
