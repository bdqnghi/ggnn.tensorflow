/**
 * Removes this node from its current parent, if any. Short for: <code>this.getParent().removeChild(this)</code>
 */
public void detach() {
    if (parent != null) {
        parent.removeChild(this);
        parent = null;
    }
}
