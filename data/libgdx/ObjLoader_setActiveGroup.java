private Group setActiveGroup(String name) {
    // through an Array
    for (Group group : groups) {
        if (group.name.equals(name))
            return group;
    }
    Group group = new Group(name);
    groups.add(group);
    return group;
}
