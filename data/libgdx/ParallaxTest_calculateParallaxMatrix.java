public Matrix4 calculateParallaxMatrix(float parallaxX, float parallaxY) {
    update();
    tmp.set(position);
    tmp.x *= parallaxX;
    tmp.y *= parallaxY;
    parallaxView.setToLookAt(tmp, tmp2.set(tmp).add(direction), up);
    parallaxCombined.set(projection);
    Matrix4.mul(parallaxCombined.val, parallaxView.val);
    return parallaxCombined;
}
