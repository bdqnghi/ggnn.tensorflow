public String getToolTip(MouseEvent e) {
    int row = table.rowAtPoint(e.getPoint());
    int column = table.columnAtPoint(e.getPoint());
    if (column == 5) {
        return "Click me!";
    } else if (column != 0) {
        return getValueAt(row, column).toString();
    } else {
        return "Select if you want to use this extension!";
    }
}
