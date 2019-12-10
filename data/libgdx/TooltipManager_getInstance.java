static public TooltipManager getInstance() {
    if (files == null || files != Gdx.files) {
        files = Gdx.files;
        instance = new TooltipManager();
    }
    return instance;
}
