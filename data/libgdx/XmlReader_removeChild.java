public void removeChild(Element child) {
    if (children != null)
        children.removeValue(child, true);
}
