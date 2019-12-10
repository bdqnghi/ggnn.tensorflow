public List<String> getGradleArgs() {
    List<String> list = new ArrayList<String>();
    list.add("--no-daemon");
    if (offlineBox.isSelected()) {
        list.add("--offline");
    }
    if (eclipseBox.isSelected()) {
        list.add("eclipse");
        list.add("afterEclipseImport");
    }
    if (ideaBox.isSelected()) {
        list.add("idea");
    }
    return list;
}
