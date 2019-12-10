@Override
public void dispose() {
    stop();
    for (int i = 0; i < sounds.length; i++) {
        if (sounds[i] != null)
            sounds[i].dispose();
    }
    sounds = null;
}
