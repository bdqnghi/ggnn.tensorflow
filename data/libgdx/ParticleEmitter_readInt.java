static int readInt(BufferedReader reader, String name) throws IOException {
    return Integer.parseInt(readString(reader, name));
}
