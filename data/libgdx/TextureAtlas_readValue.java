static String readValue(BufferedReader reader) throws IOException {
    String line = reader.readLine();
    int colon = line.indexOf(':');
    if (colon == -1)
        throw new GdxRuntimeException("Invalid line: " + line);
    return line.substring(colon + 1).trim();
}
