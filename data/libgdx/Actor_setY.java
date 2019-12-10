public void setY(float y) {
    if (this.y != y) {
        this.y = y;
        positionChanged();
    }
}
