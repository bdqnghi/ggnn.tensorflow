public String toString() {
    if (hasPKMHeader()) {
        return (ETC1.isValidPKM(compressedData, 0) ? "valid" : "invalid") + " pkm [" + ETC1.getWidthPKM(compressedData, 0) + "x" + ETC1.getHeightPKM(compressedData, 0) + "], compressed: " + (compressedData.capacity() - ETC1.PKM_HEADER_SIZE);
    } else {
        return "raw [" + width + "x" + height + "], compressed: " + (compressedData.capacity() - ETC1.PKM_HEADER_SIZE);
    }
}
