public byte[] getBytes() {
    if (etcData != null) {
        byte[] result = new byte[getSize()];
        etcData.compressedData.position(etcData.dataOffset);
        etcData.compressedData.get(result);
        return result;
    }
    throw new GdxRuntimeException("Unsupported output format, try adding '-etc1' as argument");
}
