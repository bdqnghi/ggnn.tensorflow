@Override
public boolean isPlaying() {
    isPlaying &= sound.getPlayState() == 1;
    return isPlaying;
}
