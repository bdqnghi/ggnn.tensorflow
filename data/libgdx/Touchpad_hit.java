@Override
public Actor hit(float x, float y, boolean touchable) {
    return touchBounds.contains(x, y) ? this : null;
}
