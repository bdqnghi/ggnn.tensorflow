public float getDuration() {
    if (player == null)
        return 0.0f;
    return player.getDuration() / 1000f;
}
