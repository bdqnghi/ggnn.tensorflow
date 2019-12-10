public void removeEmitter(int row) {
    controllersData.removeIndex(row).controller.dispose();
    rebuildActiveControllers();
}
