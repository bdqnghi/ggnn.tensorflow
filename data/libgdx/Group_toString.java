void toString(StringBuilder buffer, int indent) {
    buffer.append(super.toString());
    buffer.append('\n');
    Actor[] actors = children.begin();
    for (int i = 0, n = children.size; i < n; i++) {
        for (int ii = 0; ii < indent; ii++) buffer.append("|  ");
        Actor actor = actors[i];
        if (actor instanceof Group)
            ((Group) actor).toString(buffer, indent + 1);
        else {
            buffer.append(actor);
            buffer.append('\n');
        }
    }
    children.end();
}
