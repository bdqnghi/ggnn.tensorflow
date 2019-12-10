protected void pause() {
    if (soundPool == null) {
        return;
    }
    synchronized (musics) {
        for (AndroidMusic music : musics) {
            if (music.isPlaying()) {
                music.pause();
                music.wasPlaying = true;
            } else
                music.wasPlaying = false;
        }
    }
    this.soundPool.autoPause();
}
