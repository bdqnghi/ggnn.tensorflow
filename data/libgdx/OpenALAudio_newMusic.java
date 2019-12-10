public OpenALMusic newMusic(FileHandle file) {
    if (file == null)
        throw new IllegalArgumentException("file cannot be null.");
    Class<? extends OpenALMusic> musicClass = extensionToMusicClass.get(file.extension().toLowerCase());
    if (musicClass == null)
        throw new GdxRuntimeException("Unknown file extension for music: " + file);
    try {
        return musicClass.getConstructor(new Class[] { OpenALAudio.class, FileHandle.class }).newInstance(this, file);
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error creating music " + musicClass.getName() + " for file: " + file, ex);
    }
}
