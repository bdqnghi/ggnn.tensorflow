@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle file, SoundParameter parameter) {
    sound = Gdx.audio.newSound(file);
}
