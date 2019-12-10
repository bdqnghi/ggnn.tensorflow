/**
 * Resets the optional state of this action to as if it were newly created, allowing the action to be pooled and reused. State
 * required to be set for every usage of this action or computed during the action does not need to be reset.
 * <p>
 * The default implementation calls {@link #restart()}.
 * <p>
 * If a subclass has optional state, it must override this method, call super, and reset the optional state.
 */
public void reset() {
    actor = null;
    target = null;
    pool = null;
    restart();
}
