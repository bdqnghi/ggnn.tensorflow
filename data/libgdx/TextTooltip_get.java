public float get(Actor context) {
    return Math.min(manager.maxWidth, container.getActor().getGlyphLayout().width);
}
