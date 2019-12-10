public void setLength(long newLength) throws IOException {
    if (len != newLength) {
        consolidate();
        if (data.length() > newLength) {
            data = data.substring(0, (int) newLength);
            len = (int) newLength;
        } else {
            // System.out.println("padding " + (newLength - len) + " zeros in setLength to " + newLength);
            while (len < newLength) {
                write(0);
            }
        }
    }
}
