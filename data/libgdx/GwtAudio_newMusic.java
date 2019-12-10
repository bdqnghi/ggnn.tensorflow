@Override
public Music newMusic(FileHandle file) {
    return new GwtMusic(file);
}
