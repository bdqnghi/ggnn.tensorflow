private IntArray[] readClassDefinition(int position, int classCount) throws IOException {
    input.seek(position);
    IntArray[] glyphsByClass = new IntArray[classCount];
    for (int i = 0; i < classCount; i++) {
        glyphsByClass[i] = new IntArray();
    }
    int classFormat = input.readUnsignedShort();
    if (classFormat == 1) {
        readClassDefinitionFormat1(glyphsByClass);
    } else if (classFormat == 2) {
        readClassDefinitionFormat2(glyphsByClass);
    } else {
        throw new IOException("Unknown class definition table type " + classFormat);
    }
    return glyphsByClass;
}
