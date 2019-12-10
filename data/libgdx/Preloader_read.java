public InputStream read(String url) {
    if (texts.containsKey(url)) {
        try {
            return new ByteArrayInputStream(texts.get(url).getBytes("UTF-8"));
        } catch (UnsupportedEncodingException e) {
            return null;
        }
    }
    if (images.containsKey(url)) {
        // FIXME, sensible?
        return new ByteArrayInputStream(new byte[1]);
    }
    if (binaries.containsKey(url)) {
        return binaries.get(url).read();
    }
    if (audio.containsKey(url)) {
        // FIXME, sensible?
        return new ByteArrayInputStream(new byte[1]);
    }
    return null;
}
