protected void load(final StringBuilder out, final String name) {
    final int idx = name.lastIndexOf(':');
    final String fileName = idx < 0 ? name : name.substring(0, idx);
    final String snipName = idx < 0 || (idx >= name.length() - 1) ? "" : name.substring(idx + 1);
    ObjectMap<String, String> snips = snippets.get(fileName, null);
    if (snips == null) {
        snips = parse(root.child(fileName));
        snippets.put(fileName, snips);
    }
    String result = snips.get(snipName, null);
    if (result == null)
        throw new GdxRuntimeException("No snippet [" + snipName + "] in file " + root.child(fileName).path());
    parse(out, fileName, result);
}
