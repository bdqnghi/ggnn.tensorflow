/**
 * Allows to return custom camera if needed.
 * @param lp Returned LightProperties
 * @return Camera
 */
protected Camera interceptCamera(LightProperties lp) {
    return lp.camera;
}
