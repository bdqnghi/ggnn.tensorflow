@Override
public void setVolume(float volume) {
    sound.setVolume((int) (volume * 100));
    this.volume = volume;
}
