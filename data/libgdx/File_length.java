public long length() {
    try {
        if (!exists()) {
            return 0;
        }
        RandomAccessFile raf = new RandomAccessFile(this, "r");
        long len = raf.length();
        raf.close();
        return len;
    } catch (IOException e) {
        return 0;
    }
}
