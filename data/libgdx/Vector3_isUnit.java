@Override
public boolean isUnit(final float margin) {
    return Math.abs(len2() - 1f) < margin;
}
