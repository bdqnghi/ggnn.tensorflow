public void setCamera(float x, float y, float scale) {
    box.center.set(x, y);
    Mat22.createScaleTransform(scale, box.R);
}
