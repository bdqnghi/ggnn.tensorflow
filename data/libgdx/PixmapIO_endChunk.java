public void endChunk(DataOutputStream target) throws IOException {
    flush();
    target.writeInt(buffer.size() - 4);
    buffer.writeTo(target);
    target.writeInt((int) crc.getValue());
    buffer.reset();
    crc.reset();
}
