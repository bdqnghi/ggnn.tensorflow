@Override
public void onRegionsSelected(Array<TextureRegion> regions) {
    regionSelectDialog.setVisible(false);
    if (regions.size == 0)
        return;
    value.clear();
    value.add((TextureRegion[]) regions.toArray(TextureRegion.class));
    editor.setTexture(regions.get(0).getTexture());
    editor.restart();
}
