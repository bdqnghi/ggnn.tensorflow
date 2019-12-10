public int getSize() {
    if (etcData != null)
        return etcData.compressedData.limit() - etcData.dataOffset;
    throw new GdxRuntimeException("Unsupported output format, try adding '-etc1' as argument");
}
