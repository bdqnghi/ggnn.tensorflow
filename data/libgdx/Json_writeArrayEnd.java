public void writeArrayEnd() {
    try {
        writer.pop();
    } catch (IOException ex) {
        throw new SerializationException(ex);
    }
}
