@Override
public void setVolume(float volume) {
    if (player == null)
        return;
    player.setVolume(volume, volume);
    this.volume = volume;
}
