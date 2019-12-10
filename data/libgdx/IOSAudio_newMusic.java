@Override
public Music newMusic(FileHandle fileHandle) {
    String path = fileHandle.file().getPath().replace('\\', '/');
    OALAudioTrack track = OALAudioTrack.create();
    if (track != null) {
        if (track.preloadFile(path)) {
            return new IOSMusic(track);
        }
    }
    throw new GdxRuntimeException("Error opening music file at " + path);
}
