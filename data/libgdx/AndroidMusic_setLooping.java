@Override
public void setLooping(boolean isLooping) {
    if (player == null)
        return;
    player.setLooping(isLooping);
}
