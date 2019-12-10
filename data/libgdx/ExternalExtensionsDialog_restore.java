private void restore() {
    mainDependencies.clear();
    ((ExtensionTableModel) table.getModel()).unselectAll();
    for (int i = 0; i < mainDependenciesSnapshot.size(); i++) {
        mainDependencies.add(mainDependenciesSnapshot.get(i));
        String extensionName = mainDependenciesSnapshot.get(i).getName();
        if (((ExtensionTableModel) table.getModel()).hasExtension(extensionName)) {
            ((ExtensionTableModel) table.getModel()).setSelected(extensionName, true);
        } else {
        }
    }
}
