public void setSelected(String extensionName, boolean selected) {
    int row = -1;
    for (int i : extensions.keySet()) {
        if (extensions.get(i).getName().equals(extensionName)) {
            row = i;
            break;
        }
    }
    if (row != -1)
        table.setValueAt(selected, row, 0);
}
