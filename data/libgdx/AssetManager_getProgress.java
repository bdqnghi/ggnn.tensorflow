/**
 * @return the progress in percent of completion.
 */
public synchronized float getProgress() {
    if (toLoad == 0)
        return 1;
    return Math.min(1, loaded / (float) toLoad);
}
