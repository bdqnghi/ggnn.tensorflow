public boolean touchDown(int screenX, int screenY, int pointer, int button) {
    for (int i = 0, n = processors.size; i < n; i++) if (processors.get(i).touchDown(screenX, screenY, pointer, button))
        return true;
    return false;
}
