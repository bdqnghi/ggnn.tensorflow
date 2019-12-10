@Override
public void play() {
    if (player == null)
        return;
    if (player.isPlaying())
        return;
    try {
        if (!isPrepared) {
            player.prepare();
            isPrepared = true;
        }
        player.start();
    } catch (IllegalStateException e) {
        e.printStackTrace();
    } catch (IOException e) {
        e.printStackTrace();
    }
}
