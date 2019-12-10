/**
 * If true, {@link #drawDebug(ShapeRenderer)} will be called for this group and, optionally, all children recursively.
 */
public void setDebug(boolean enabled, boolean recursively) {
    setDebug(enabled);
    if (recursively) {
        for (Actor child : children) {
            if (child instanceof Group) {
                ((Group) child).setDebug(enabled, recursively);
            } else {
                child.setDebug(enabled);
            }
        }
    }
}
