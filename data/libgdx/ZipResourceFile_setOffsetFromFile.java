public void setOffsetFromFile(RandomAccessFile f, ByteBuffer buf) throws IOException {
    long localHdrOffset = mLocalHdrOffset;
    try {
        f.seek(localHdrOffset);
        f.readFully(buf.array());
        if (buf.getInt(0) != kLFHSignature) {
            Log.w(LOG_TAG, "didn't find signature at start of lfh");
            throw new IOException();
        }
        int nameLen = buf.getShort(kLFHNameLen) & 0xFFFF;
        int extraLen = buf.getShort(kLFHExtraLen) & 0xFFFF;
        mOffset = localHdrOffset + kLFHLen + nameLen + extraLen;
    } catch (FileNotFoundException e) {
        e.printStackTrace();
    } catch (IOException ioe) {
        ioe.printStackTrace();
    }
}
