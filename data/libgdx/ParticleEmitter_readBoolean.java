static boolean readBoolean(BufferedReader reader, String name) throws IOException {
    return Boolean.parseBoolean(readString(reader, name));
}
