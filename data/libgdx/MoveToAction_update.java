protected void update(float percent) {
    target.setPosition(startX + (endX - startX) * percent, startY + (endY - startY) * percent, alignment);
}
