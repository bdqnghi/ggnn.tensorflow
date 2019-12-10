/**
 * Kills the soundpool and all other resources
 */
public void dispose() {
    if (soundPool == null) {
        return;
    }
    synchronized (musics) {
        // gah i hate myself.... music.dispose() removes the music from the list...
        ArrayList<AndroidMusic> musicsCopy = new ArrayList<AndroidMusic>(musics);
        for (AndroidMusic music : musicsCopy) {
            music.dispose();
        }
    }
    soundPool.release();
}
