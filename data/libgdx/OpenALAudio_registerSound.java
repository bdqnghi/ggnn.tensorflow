public void registerSound(String extension, Class<? extends OpenALSound> soundClass) {
    if (extension == null)
        throw new IllegalArgumentException("extension cannot be null.");
    if (soundClass == null)
        throw new IllegalArgumentException("soundClass cannot be null.");
    extensionToSoundClass.put(extension, soundClass);
}
