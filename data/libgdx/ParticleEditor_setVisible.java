public void setVisible(String name, boolean visible) {
    for (Component component : rowsPanel.getComponents()) if (component instanceof EditorPanel && ((EditorPanel) component).getName().equals(name))
        component.setVisible(visible);
}
