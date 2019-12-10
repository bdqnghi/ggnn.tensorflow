@Override
public void stop() {
    if (player == null)
        return;
    if (isPrepared) {
        player.seekTo(0);
    }
    player.stop();
    isPrepared = false;
}
