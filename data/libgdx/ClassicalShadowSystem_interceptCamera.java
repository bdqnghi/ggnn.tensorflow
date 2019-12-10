@Override
protected Camera interceptCamera(LightProperties lp) {
    if (currentPass == SECOND_PASS)
        return this.camera;
    return lp.camera;
}
