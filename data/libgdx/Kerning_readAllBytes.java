private static byte[] readAllBytes(InputStream input) throws IOException {
    ByteArrayOutputStream out = new ByteArrayOutputStream();
    int numRead;
    byte[] buffer = new byte[16384];
    while ((numRead = input.read(buffer, 0, buffer.length)) != -1) {
        out.write(buffer, 0, numRead);
    }
    return out.toByteArray();
}
