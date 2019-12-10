/**
 * Initialize camera before computation.
 * @param camera Camera to compute.
 */
protected void prepareCamera(Camera camera) {
    camera.near = AABBNearFarAnalyzer.CAMERA_NEAR;
    camera.far = AABBNearFarAnalyzer.CAMERA_FAR;
    camera.update();
}
