@Override
public boolean scrolled(int amount) {
    for (int i = 0, n = processors.size; i < n; i++) if (processors.get(i).scrolled(amount))
        return true;
    return false;
}
