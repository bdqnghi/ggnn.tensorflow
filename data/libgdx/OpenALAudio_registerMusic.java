public void registerMusic(String extension, Class<? extends OpenALMusic> musicClass) {
    if (extension == null)
        throw new IllegalArgumentException("extension cannot be null.");
    if (musicClass == null)
        throw new IllegalArgumentException("musicClass cannot be null.");
    extensionToMusicClass.put(extension, musicClass);
}
