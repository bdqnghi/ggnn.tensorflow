private void getChildrenByNameRecursively(String name, Array<Element> result) {
    if (children == null)
        return;
    for (int i = 0; i < children.size; i++) {
        Element child = children.get(i);
        if (child.name.equals(name))
            result.add(child);
        child.getChildrenByNameRecursively(name, result);
    }
}
