public List<String> getIncompatibilities(ProjectType type) {
    List<String> incompat = new ArrayList<String>();
    String[] subArray = subDependencyMap.get(type);
    if (subArray == null) {
        incompat.add("Dependency " + name + " is not compatible with sub module " + type.getName().toUpperCase());
    }
    return incompat;
}
