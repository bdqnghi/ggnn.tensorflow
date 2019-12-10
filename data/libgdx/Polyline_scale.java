public void scale(float amount) {
    this.scaleX += amount;
    this.scaleY += amount;
    dirty = true;
    calculateScaledLength = true;
}
