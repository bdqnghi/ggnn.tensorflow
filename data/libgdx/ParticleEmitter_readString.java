static String readString(BufferedReader reader, String name) throws IOException {
    String line = reader.readLine();
    if (line == null)
        throw new IOException("Missing value: " + name);
    return readString(line);
}
