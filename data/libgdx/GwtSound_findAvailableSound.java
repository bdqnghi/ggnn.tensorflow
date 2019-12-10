/**
 * Let's find a sound that isn't currently playing.
 * @return  The index of the sound or -1 if none is available.
 */
private int findAvailableSound() {
    for (int i = 0; i < sounds.length; i++) {
        int index = (soundIndex + i) % sounds.length;
        if (sounds[index] == null || !sounds[index].isPlaying()) {
            // point to the next likely free player
            soundIndex = (index + 1) % sounds.length;
            // return the free player
            return index;
        }
    }
    // all are busy playing, stop the next sound in the queue and reuse it
    int index = soundIndex % sounds.length;
    soundIndex = (index + 1) % sounds.length;
    return index;
}
