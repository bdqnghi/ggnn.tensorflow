public void setPosition(float position) {
    if (player == null)
        return;
    try {
        if (!isPrepared) {
            player.prepare();
            isPrepared = true;
        }
        player.seekTo((int) (position * 1000));
    } catch (IllegalStateException e) {
        e.printStackTrace();
    } catch (IOException e) {
        e.printStackTrace();
    }
}
