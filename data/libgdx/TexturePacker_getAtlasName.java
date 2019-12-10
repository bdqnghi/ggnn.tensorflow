static public String getAtlasName(String name, boolean flattenPaths) {
    return flattenPaths ? new FileHandle(name).name() : name;
}
