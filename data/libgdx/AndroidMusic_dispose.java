@Override
public void dispose() {
    if (player == null)
        return;
    try {
        player.release();
    } catch (Throwable t) {
        Gdx.app.log("AndroidMusic", "error while disposing AndroidMusic instance, non-fatal");
    } finally {
        player = null;
        onCompletionListener = null;
        synchronized (audio.musics) {
            audio.musics.remove(this);
        }
    }
}
