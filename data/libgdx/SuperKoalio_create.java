@Override
public void create() {
    // load the koala frames, split them, and assign them to Animations
    koalaTexture = new Texture("data/maps/tiled/super-koalio/koalio.png");
    TextureRegion[] regions = TextureRegion.split(koalaTexture, 18, 26)[0];
    stand = new Animation(0, regions[0]);
    jump = new Animation(0, regions[1]);
    walk = new Animation(0.15f, regions[2], regions[3], regions[4]);
    walk.setPlayMode(Animation.PlayMode.LOOP_PINGPONG);
    // figure out the width and height of the koala for collision
    // detection and rendering by converting a koala frames pixel
    // size into world units (1 unit == 16 pixels)
    Koala.WIDTH = 1 / 16f * regions[0].getRegionWidth();
    Koala.HEIGHT = 1 / 16f * regions[0].getRegionHeight();
    // load the map, set the unit scale to 1/16 (1 unit == 16 pixels)
    map = new TmxMapLoader().load("data/maps/tiled/super-koalio/level1.tmx");
    renderer = new OrthogonalTiledMapRenderer(map, 1 / 16f);
    // create an orthographic camera, shows us 30x20 units of the world
    camera = new OrthographicCamera();
    camera.setToOrtho(false, 30, 20);
    camera.update();
    // create the Koala we want to move around the world
    koala = new Koala();
    koala.position.set(20, 20);
}
