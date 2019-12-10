protected void resume() {
    if (soundPool == null) {
        return;
    }
    synchronized (musics) {
        for (int i = 0; i < musics.size(); i++) {
            if (musics.get(i).wasPlaying)
                musics.get(i).play();
        }
    }
    this.soundPool.autoResume();
}
