public float get(Actor context) {
    if (context instanceof Layout)
        return ((Layout) context).getMaxHeight();
    return context == null ? 0 : context.getHeight();
}
