@Override
public void dispose() {
    modelBatch.dispose();
    assets.dispose();
    assets = null;
    axesModel.dispose();
    axesModel = null;
}
