public void remove() {
    if (currentIndex < 0)
        throw new IllegalStateException("next must be called before remove.");
    map.remove(keys.get(nextIndex - 1));
}
