protected ObjectMap<String, String> parse(final FileHandle file) {
    ObjectMap<String, String> result = new ObjectMap<String, String>();
    BufferedReader reader = file.reader(1024);
    String line;
    String snipName = "";
    stringBuilder.setLength(0);
    int idx;
    try {
        while ((line = reader.readLine()) != null) {
            if (line.length() > 3 && line.charAt(0) == '[' && (idx = line.indexOf(']')) > 1) {
                if (snipName.length() > 0 || stringBuilder.length() > 0)
                    result.put(snipName, stringBuilder.toString());
                stringBuilder.setLength(0);
                snipName = line.substring(1, idx);
            } else
                stringBuilder.append(line.trim()).append("\r\n");
        }
    } catch (IOException e) {
        throw new GdxRuntimeException(e);
    }
    if (snipName.length() > 0 || stringBuilder.length() > 0)
        result.put(snipName, stringBuilder.toString());
    return result;
}
