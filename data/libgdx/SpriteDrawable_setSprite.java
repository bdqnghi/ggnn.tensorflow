public void setSprite(Sprite sprite) {
    this.sprite = sprite;
    setMinWidth(sprite.getWidth());
    setMinHeight(sprite.getHeight());
}
