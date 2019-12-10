public void findExpandedObjects(Array objects) {
    if (expanded && !Tree.findExpandedObjects(children, objects))
        objects.add(object);
}
