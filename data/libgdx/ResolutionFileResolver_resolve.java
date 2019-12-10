protected String resolve(FileHandle originalHandle, String suffix) {
    String parentString = "";
    FileHandle parent = originalHandle.parent();
    if (parent != null && !parent.name().equals("")) {
        parentString = parent + "/";
    }
    return parentString + suffix + "/" + originalHandle.name();
}
