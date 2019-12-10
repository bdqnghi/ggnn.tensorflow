public void setX(float x) {
    if (this.x != x) {
        this.x = x;
        positionChanged();
    }
}
