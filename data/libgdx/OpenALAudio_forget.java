/**
 * Removes the disposed sound from the least recently played list
 */
public void forget(OpenALSound sound) {
    for (int i = 0; i < recentSounds.length; i++) {
        if (recentSounds[i] == sound)
            recentSounds[i] = null;
    }
}
