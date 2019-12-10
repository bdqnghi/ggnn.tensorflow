@Override
public void pause() {
    if (track.isPlaying()) {
        track.setPaused(true);
    }
}
