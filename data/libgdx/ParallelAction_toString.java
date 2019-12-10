public String toString() {
    StringBuilder buffer = new StringBuilder(64);
    buffer.append(super.toString());
    buffer.append('(');
    Array<Action> actions = this.actions;
    for (int i = 0, n = actions.size; i < n; i++) {
        if (i > 0)
            buffer.append(", ");
        buffer.append(actions.get(i));
    }
    buffer.append(')');
    return buffer.toString();
}
