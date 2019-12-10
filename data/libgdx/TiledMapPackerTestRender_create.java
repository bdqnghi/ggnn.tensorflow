@Override
public void create() {
    atlasTmxMapLoader = new AtlasTmxMapLoader(new InternalFileHandleResolver());
    params = new AtlasTmxMapLoader.AtlasTiledMapLoaderParameters();
    params.generateMipMaps = false;
    params.convertObjectToTileSpace = false;
    params.flipY = true;
    viewport = new FitViewport(WORLD_WIDTH, WORLD_HEIGHT);
    cam = (OrthographicCamera) viewport.getCamera();
    map = atlasTmxMapLoader.load(TMX_LOC, params);
    mapRenderer = new OrthogonalTiledMapRenderer(map, UNIT_SCALE);
}
