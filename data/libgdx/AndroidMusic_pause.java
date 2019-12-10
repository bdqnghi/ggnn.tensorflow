@Override
public void pause() {
    if (player == null)
        return;
    if (player.isPlaying()) {
        player.pause();
    }
    wasPlaying = false;
}
