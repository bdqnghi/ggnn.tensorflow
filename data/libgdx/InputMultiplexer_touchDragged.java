public boolean touchDragged(int screenX, int screenY, int pointer) {
    for (int i = 0, n = processors.size; i < n; i++) if (processors.get(i).touchDragged(screenX, screenY, pointer))
        return true;
    return false;
}
