@Override
public void update(boolean updateFrustum) {
    float aspect = viewportWidth / viewportHeight;
    projection.setToProjection(Math.abs(near), Math.abs(far), fieldOfView, aspect);
    view.setToLookAt(position, tmp.set(position).add(direction), up);
    combined.set(projection);
    Matrix4.mul(combined.val, view.val);
    if (updateFrustum) {
        invProjectionView.set(combined);
        Matrix4.inv(invProjectionView.val);
        frustum.update(invProjectionView);
    }
}
