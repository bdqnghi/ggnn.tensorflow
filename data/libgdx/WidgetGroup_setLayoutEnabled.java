private void setLayoutEnabled(Group parent, boolean enabled) {
    SnapshotArray<Actor> children = parent.getChildren();
    for (int i = 0, n = children.size; i < n; i++) {
        Actor actor = children.get(i);
        if (actor instanceof Layout)
            ((Layout) actor).setLayoutEnabled(enabled);
        else if (// 
        actor instanceof Group)
            setLayoutEnabled((Group) actor, enabled);
    }
}
