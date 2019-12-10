/**
 * Creates a new Music instance from the provided FileDescriptor. It is the caller's responsibility to close the file
 * descriptor. It is safe to do so as soon as this call returns.
 *
 * @param fd the FileDescriptor from which to create the Music
 *
 * @see Audio#newMusic(FileHandle)
 */
public Music newMusic(FileDescriptor fd) {
    if (soundPool == null) {
        throw new GdxRuntimeException("Android audio is not enabled by the application config.");
    }
    MediaPlayer mediaPlayer = new MediaPlayer();
    try {
        mediaPlayer.setDataSource(fd);
        mediaPlayer.prepare();
        AndroidMusic music = new AndroidMusic(this, mediaPlayer);
        synchronized (musics) {
            musics.add(music);
        }
        return music;
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error loading audio from FileDescriptor", ex);
    }
}
