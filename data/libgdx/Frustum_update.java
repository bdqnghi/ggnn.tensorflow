/**
 * Updates the clipping plane's based on the given inverse combined projection and view matrix, e.g. from an
 * {@link OrthographicCamera} or {@link PerspectiveCamera}.
 * @param inverseProjectionView the combined projection and view matrices.
 */
public void update(Matrix4 inverseProjectionView) {
    System.arraycopy(clipSpacePlanePointsArray, 0, planePointsArray, 0, clipSpacePlanePointsArray.length);
    Matrix4.prj(inverseProjectionView.val, planePointsArray, 0, 8, 3);
    for (int i = 0, j = 0; i < 8; i++) {
        Vector3 v = planePoints[i];
        v.x = planePointsArray[j++];
        v.y = planePointsArray[j++];
        v.z = planePointsArray[j++];
    }
    planes[0].set(planePoints[1], planePoints[0], planePoints[2]);
    planes[1].set(planePoints[4], planePoints[5], planePoints[7]);
    planes[2].set(planePoints[0], planePoints[4], planePoints[3]);
    planes[3].set(planePoints[5], planePoints[1], planePoints[6]);
    planes[4].set(planePoints[2], planePoints[3], planePoints[6]);
    planes[5].set(planePoints[4], planePoints[0], planePoints[1]);
}
