private void indent() throws IOException {
    int count = indent;
    if (currentElement != null)
        count++;
    for (int i = 0; i < count; i++) writer.write('\t');
}
