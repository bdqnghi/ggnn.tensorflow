public boolean keyTyped(char character) {
    for (int i = 0, n = processors.size; i < n; i++) if (processors.get(i).keyTyped(character))
        return true;
    return false;
}
