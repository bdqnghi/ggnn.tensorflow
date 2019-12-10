public OpenALSound newSound(FileHandle file) {
    if (file == null)
        throw new IllegalArgumentException("file cannot be null.");
    Class<? extends OpenALSound> soundClass = extensionToSoundClass.get(file.extension().toLowerCase());
    if (soundClass == null)
        throw new GdxRuntimeException("Unknown file extension for sound: " + file);
    try {
        return soundClass.getConstructor(new Class[] { OpenALAudio.class, FileHandle.class }).newInstance(this, file);
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error creating sound " + soundClass.getName() + " for file: " + file, ex);
    }
}
