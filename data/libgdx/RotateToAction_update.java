protected void update(float percent) {
    target.setRotation(start + (end - start) * percent);
}
