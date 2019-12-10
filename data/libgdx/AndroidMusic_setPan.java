@Override
public void setPan(float pan, float volume) {
    if (player == null)
        return;
    float leftVolume = volume;
    float rightVolume = volume;
    if (pan < 0) {
        rightVolume *= (1 - Math.abs(pan));
    } else if (pan > 0) {
        leftVolume *= (1 - Math.abs(pan));
    }
    player.setVolume(leftVolume, rightVolume);
    this.volume = volume;
}
