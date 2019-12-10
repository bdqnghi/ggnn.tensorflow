@Override
public void setLooping(boolean isLooping) {
    track.setNumberOfLoops(isLooping ? -1 : 0);
}
