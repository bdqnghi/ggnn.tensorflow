public void setRotation(float degrees) {
    if (this.rotation != degrees) {
        this.rotation = degrees;
        rotationChanged();
    }
}
