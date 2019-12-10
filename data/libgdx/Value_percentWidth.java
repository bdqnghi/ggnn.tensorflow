/**
 * Returns a value that is a percentage of the specified actor's width. The context actor is ignored.
 */
static public Value percentWidth(final float percent, final Actor actor) {
    if (actor == null)
        throw new IllegalArgumentException("actor cannot be null.");
    return new Value() {

        public float get(Actor context) {
            return actor.getWidth() * percent;
        }
    };
}
