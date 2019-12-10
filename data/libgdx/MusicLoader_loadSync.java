@Override
public Music loadSync(AssetManager manager, String fileName, FileHandle file, MusicParameter parameter) {
    Music music = this.music;
    this.music = null;
    return music;
}
