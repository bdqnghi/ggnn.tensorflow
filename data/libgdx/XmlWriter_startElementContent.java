private boolean startElementContent() throws IOException {
    if (currentElement == null)
        return false;
    indent++;
    stack.add(currentElement);
    currentElement = null;
    writer.write(">");
    return true;
}
