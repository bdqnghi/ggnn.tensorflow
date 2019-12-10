public void remove() {
    if (nextIndex < 0)
        throw new IllegalStateException("next must be called before remove.");
    nextIndex--;
    set.remove(items.get(nextIndex));
}
