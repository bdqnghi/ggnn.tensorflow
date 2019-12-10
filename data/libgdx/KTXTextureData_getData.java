public ByteBuffer getData(int requestedLevel, int requestedFace) {
    int pos = imagePos;
    for (int level = 0; level < numberOfMipmapLevels; level++) {
        int faceLodSize = compressedData.getInt(pos);
        int faceLodSizeRounded = (faceLodSize + 3) & ~3;
        pos += 4;
        if (level == requestedLevel) {
            for (int face = 0; face < numberOfFaces; face++) {
                if (face == requestedFace) {
                    compressedData.position(pos);
                    ByteBuffer data = compressedData.slice();
                    data.limit(faceLodSizeRounded);
                    return data;
                }
                pos += faceLodSizeRounded;
            }
        } else {
            pos += faceLodSizeRounded * numberOfFaces;
        }
    }
    return null;
}
