public void setTarget(Actor actor) {
    if (actor != null && !(actor instanceof Layout))
        throw new GdxRuntimeException("Actor must implement layout: " + actor);
    super.setTarget(actor);
}
