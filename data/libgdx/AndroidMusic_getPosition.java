@Override
public float getPosition() {
    if (player == null)
        return 0.0f;
    return player.getCurrentPosition() / 1000f;
}
