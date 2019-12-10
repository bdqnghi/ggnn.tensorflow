public URI getURI(int row, int column) {
    if (column != 5)
        return null;
    return (URI) getValueAt(row, column);
}
