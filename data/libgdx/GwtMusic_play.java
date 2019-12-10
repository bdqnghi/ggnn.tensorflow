@Override
public void play() {
    if (isPlaying())
        return;
    if (sound.getPaused()) {
        resume();
        return;
    }
    soundOptions.volume = (int) (volume * 100);
    soundOptions.pan = (int) (pan * 100);
    soundOptions.loops = 1;
    soundOptions.from = 0;
    sound.play(soundOptions);
    isPlaying = true;
}
