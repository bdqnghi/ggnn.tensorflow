@Override
public void dispose() {
    Array<String> loaded = this.assets.getAssetNames();
    this.assets.dispose();
    this.batch.dispose();
    String name = ClassReflection.getSimpleName(this.getClass());
    for (int i = 0; i < loaded.size; ++i) {
        String asset = loaded.get(i);
        if (this.assets.isLoaded(asset)) {
            Gdx.app.error(name, asset + " not properly disposed of!");
        } else {
            Gdx.app.log(name, asset + " disposed of OK");
        }
    }
}
