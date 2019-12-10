/**
 * Returns the number of tuple values read (1, 2 or 4).
 */
static int readTuple(BufferedReader reader) throws IOException {
    String line = reader.readLine();
    int colon = line.indexOf(':');
    if (colon == -1)
        throw new GdxRuntimeException("Invalid line: " + line);
    int i = 0, lastMatch = colon + 1;
    for (i = 0; i < 3; i++) {
        int comma = line.indexOf(',', lastMatch);
        if (comma == -1)
            break;
        tuple[i] = line.substring(lastMatch, comma).trim();
        lastMatch = comma + 1;
    }
    tuple[i] = line.substring(lastMatch).trim();
    return i + 1;
}
