@Override
public boolean isPlaying() {
    if (player == null)
        return false;
    return player.isPlaying();
}
