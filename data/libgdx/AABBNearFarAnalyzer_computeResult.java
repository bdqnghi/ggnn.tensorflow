/**
 * Compute final result.
 * @param bb BoundingBox encompassing instances
 * @param camera Camera to compute
 */
protected void computeResult(BoundingBox bb, Camera camera) {
    // Radius
    float radius = bb1.getDimensions(tmpV).len() * 0.5f;
    // Center
    bb1.getCenter(tmpV);
    // Computation
    float distance = tmpV.dst(camera.position);
    float near = distance - radius;
    float far = distance + radius;
    if (near <= 0)
        near = CAMERA_NEAR;
    if (far <= 0)
        far = CAMERA_FAR;
    camera.near = near;
    camera.far = far;
    camera.update();
}
