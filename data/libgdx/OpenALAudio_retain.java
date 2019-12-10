/**
 * Retains a list of the most recently played sounds and stops the sound played least recently if necessary for a new sound to
 * play
 */
protected void retain(OpenALSound sound, boolean stop) {
    // Move the pointer ahead and wrap
    mostRecetSound++;
    mostRecetSound %= recentSounds.length;
    if (stop) {
        // Stop the least recent sound (the one we are about to bump off the buffer)
        if (recentSounds[mostRecetSound] != null)
            recentSounds[mostRecetSound].stop();
    }
    recentSounds[mostRecetSound] = sound;
}
