@Override
public Camera next() {
    LightProperties lp = nextDirectional();
    if (lp != null)
        return interceptCamera(lp);
    lp = nextSpot();
    if (lp != null)
        return interceptCamera(lp);
    lp = nextPoint();
    if (lp != null)
        return interceptCamera(lp);
    return null;
}
