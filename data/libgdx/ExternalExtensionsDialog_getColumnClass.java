@Override
public Class getColumnClass(int column) {
    if (column == 0)
        return Boolean.class;
    if (column == 5)
        return URI.class;
    return super.getColumnClass(column);
}
