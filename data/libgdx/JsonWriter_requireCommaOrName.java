private void requireCommaOrName() throws IOException {
    if (current == null)
        return;
    if (current.array) {
        if (!current.needsComma)
            current.needsComma = true;
        else
            writer.write(',');
    } else {
        if (!named)
            throw new IllegalStateException("Name must be set.");
        named = false;
    }
}
