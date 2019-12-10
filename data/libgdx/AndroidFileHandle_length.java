public long length() {
    if (type == FileType.Internal) {
        AssetFileDescriptor fileDescriptor = null;
        try {
            fileDescriptor = assets.openFd(file.getPath());
            return fileDescriptor.getLength();
        } catch (IOException ignored) {
        } finally {
            if (fileDescriptor != null) {
                try {
                    fileDescriptor.close();
                } catch (IOException e) {
                }
                ;
            }
        }
    }
    return super.length();
}
