public void writeArrayStart() {
    try {
        writer.array();
    } catch (IOException ex) {
        throw new SerializationException(ex);
    }
}
