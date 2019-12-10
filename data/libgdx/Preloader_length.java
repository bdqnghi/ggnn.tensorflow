public long length(String url) {
    if (texts.containsKey(url)) {
        try {
            return texts.get(url).getBytes("UTF-8").length;
        } catch (UnsupportedEncodingException e) {
            return texts.get(url).getBytes().length;
        }
    }
    if (images.containsKey(url)) {
        // FIXME, sensible?
        return 1;
    }
    if (binaries.containsKey(url)) {
        return binaries.get(url).length();
    }
    if (audio.containsKey(url)) {
        // FIXME sensible?
        return 1;
    }
    return 0;
}
