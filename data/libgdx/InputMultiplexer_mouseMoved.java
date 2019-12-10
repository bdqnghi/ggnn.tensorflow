@Override
public boolean mouseMoved(int screenX, int screenY) {
    for (int i = 0, n = processors.size; i < n; i++) if (processors.get(i).mouseMoved(screenX, screenY))
        return true;
    return false;
}
