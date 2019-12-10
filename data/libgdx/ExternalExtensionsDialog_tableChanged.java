@Override
public void tableChanged(TableModelEvent e) {
    int row = e.getFirstRow();
    int column = e.getColumn();
    if (column == 0) {
        ExternalExtension extension = ((ExtensionTableModel) table.getModel()).getExtension(row);
        Dependency dep = extension.generateDependency();
        boolean selected = (Boolean) table.getModel().getValueAt(row, 0);
        if (selected) {
            if (!mainDependencies.contains(dep)) {
                mainDependencies.add(dep);
            }
        } else {
            mainDependencies.remove(dep);
        }
    }
}
