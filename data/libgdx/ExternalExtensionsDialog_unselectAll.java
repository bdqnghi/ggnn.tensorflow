public void unselectAll() {
    for (int row : extensions.keySet()) {
        table.setValueAt(false, row, 0);
    }
}
