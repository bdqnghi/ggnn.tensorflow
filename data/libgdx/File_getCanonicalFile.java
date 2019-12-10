public File getCanonicalFile() {
    File cParent = parent == null ? null : parent.getCanonicalFile();
    if (name.equals(".")) {
        return cParent == null ? ROOT : cParent;
    }
    if (cParent != null && cParent.name.equals("")) {
        cParent = null;
    }
    if (name.equals("..")) {
        if (cParent == null) {
            return ROOT;
        }
        if (cParent.parent == null) {
            return ROOT;
        }
        return cParent.parent;
    }
    if (cParent == null && !name.equals("")) {
        return new File(ROOT, name);
    }
    return new File(cParent, name);
}
