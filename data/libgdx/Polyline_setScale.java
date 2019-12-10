public void setScale(float scaleX, float scaleY) {
    this.scaleX = scaleX;
    this.scaleY = scaleY;
    dirty = true;
    calculateScaledLength = true;
}
