@Override
public void resume() {
    device = Gdx.audio.newAudioDevice(44100, true);
    recorder = Gdx.audio.newAudioRecorder(44100, true);
}
