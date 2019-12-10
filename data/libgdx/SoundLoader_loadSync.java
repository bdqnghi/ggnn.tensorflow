@Override
public Sound loadSync(AssetManager manager, String fileName, FileHandle file, SoundParameter parameter) {
    Sound sound = this.sound;
    this.sound = null;
    return sound;
}
