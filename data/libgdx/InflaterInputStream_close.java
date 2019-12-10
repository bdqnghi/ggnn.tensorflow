@Override
public void close() throws IOException {
    super.close();
    StreamUtils.closeQuietly(in);
}
