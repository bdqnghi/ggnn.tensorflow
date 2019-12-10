protected void update(float percent) {
    target.setScale(startX + (endX - startX) * percent, startY + (endY - startY) * percent);
}
