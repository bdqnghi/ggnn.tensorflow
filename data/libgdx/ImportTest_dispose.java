@Override
public void dispose() {
    super.dispose();
    importer.deleteAllData();
    importer.dispose();
    importer = null;
}
