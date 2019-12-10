@Override
public void create() {
    // copy an internal mp3 to the external storage
    FileHandle src = Gdx.files.internal("data/8.12.mp3");
    FileHandle dst = Gdx.files.external("8.12.mp3");
    src.copyTo(dst);
    // create a music instance and start playback
    Music music = Gdx.audio.newMusic(dst);
    music.play();
}
