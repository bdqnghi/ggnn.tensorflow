/**
 * Returns the first actor found with the specified name. Note this recursively compares the name of every actor in the
 * group.
 */
public <T extends Actor> T findActor(String name) {
    Array<Actor> children = this.children;
    for (int i = 0, n = children.size; i < n; i++) if (name.equals(children.get(i).getName()))
        return (T) children.get(i);
    for (int i = 0, n = children.size; i < n; i++) {
        Actor child = children.get(i);
        if (child instanceof Group) {
            Actor actor = ((Group) child).findActor(name);
            if (actor != null)
                return (T) actor;
        }
    }
    return null;
}
