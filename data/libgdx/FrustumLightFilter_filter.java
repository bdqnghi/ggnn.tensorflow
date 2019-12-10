@Override
public boolean filter(BaseLight light, Camera camera, Camera mainCamera) {
    Frustum f1 = mainCamera.frustum;
    Frustum f2 = camera.frustum;
    bb.inf();
    for (int i = 0; i < f2.planePoints.length; i++) {
        bb.ext(f2.planePoints[i]);
    }
    if (f1.boundsInFrustum(bb)) {
        return true;
    }
    return false;
}
