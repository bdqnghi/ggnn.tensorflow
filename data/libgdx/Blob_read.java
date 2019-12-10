public InputStream read() {
    return new InputStream() {

        @Override
        public int read() throws IOException {
            if (pos == length())
                return -1;
            return get(pos++) & 0xff;
        }

        @Override
        public int available() {
            return length() - pos;
        }

        int pos;
    };
}
