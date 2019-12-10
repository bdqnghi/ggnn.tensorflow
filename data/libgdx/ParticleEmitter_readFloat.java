static float readFloat(BufferedReader reader, String name) throws IOException {
    return Float.parseFloat(readString(reader, name));
}
