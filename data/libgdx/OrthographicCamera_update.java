@Override
public void update(boolean updateFrustum) {
    projection.setToOrtho(zoom * -viewportWidth / 2, zoom * (viewportWidth / 2), zoom * -(viewportHeight / 2), zoom * viewportHeight / 2, near, far);
    view.setToLookAt(position, tmp.set(position).add(direction), up);
    combined.set(projection);
    Matrix4.mul(combined.val, view.val);
    if (updateFrustum) {
        invProjectionView.set(combined);
        Matrix4.inv(invProjectionView.val);
        frustum.update(invProjectionView);
    }
}
