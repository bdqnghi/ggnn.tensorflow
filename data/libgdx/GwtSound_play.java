private long play(float volume, float pitch, float pan, boolean loop) {
    int soundId = findAvailableSound();
    if (soundId >= 0) {
        GwtMusic sound;
        if (sounds[soundId] == null) {
            sounds[soundId] = new GwtMusic(soundFile);
        }
        sound = sounds[soundId];
        sound.stop();
        sound.setPan(pan, volume);
        sound.setLooping(loop);
        sound.play();
    }
    return soundId;
}
