private String parseGwtInherits(ProjectBuilder builder) {
    String parsed = "";
    for (Dependency dep : builder.dependencies) {
        if (dep.getGwtInherits() != null) {
            for (String inherit : dep.getGwtInherits()) {
                parsed += "\t<inherits name='" + inherit + "' />\n";
            }
        }
    }
    return parsed;
}
