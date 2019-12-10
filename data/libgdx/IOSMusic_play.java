@Override
public void play() {
    if (track.isPaused()) {
        track.setPaused(false);
    } else if (!track.isPlaying()) {
        track.play();
    }
}
