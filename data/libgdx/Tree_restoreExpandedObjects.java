public void restoreExpandedObjects(Array objects) {
    for (int i = 0, n = objects.size; i < n; i++) {
        Node node = findNode(objects.get(i));
        if (node != null) {
            node.setExpanded(true);
            node.expandTo();
        }
    }
}
