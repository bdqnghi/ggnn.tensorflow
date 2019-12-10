@Override
public boolean scrolled(int amount) {
    return zoom(amount * scrollFactor * translateUnits);
}
