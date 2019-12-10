public boolean contains(String url) {
    return texts.containsKey(url) || images.containsKey(url) || binaries.containsKey(url) || audio.containsKey(url) || directories.containsKey(url);
}
