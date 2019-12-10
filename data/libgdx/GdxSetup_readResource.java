private byte[] readResource(File file) {
    InputStream in = null;
    try {
        ByteArrayOutputStream bytes = new ByteArrayOutputStream();
        byte[] buffer = new byte[1024 * 10];
        in = new FileInputStream(file);
        if (in == null)
            throw new RuntimeException("Couldn't read resource '" + file.getAbsoluteFile() + "'");
        int read = 0;
        while ((read = in.read(buffer)) > 0) {
            bytes.write(buffer, 0, read);
        }
        return bytes.toByteArray();
    } catch (Throwable e) {
        throw new RuntimeException("Couldn't read resource '" + file.getAbsoluteFile() + "'", e);
    } finally {
        if (in != null)
            try {
                in.close();
            } catch (IOException e) {
            }
    }
}
