public void writeObjectEnd() {
    try {
        writer.pop();
    } catch (IOException ex) {
        throw new SerializationException(ex);
    }
}
