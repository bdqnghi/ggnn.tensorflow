public float get(Actor context) {
    Drawable background = ((Table) context).background;
    return background == null ? 0 : background.getRightWidth();
}
