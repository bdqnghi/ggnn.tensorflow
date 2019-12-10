public void dispose() {
    if (meshInterface != null)
        meshInterface.release();
    meshInterface = null;
    super.dispose();
}
