@Override
public boolean isPlaying() {
    return track.isPlaying() && !track.isPaused();
}
