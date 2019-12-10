protected void update(float percent) {
    target.setSize(startWidth + (endWidth - startWidth) * percent, startHeight + (endHeight - startHeight) * percent);
}
