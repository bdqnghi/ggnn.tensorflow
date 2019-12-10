public void create() {
    renderer = new ShapeRenderer();
    triangulate();
    System.out.println(seed);
    Gdx.input.setInputProcessor(new InputAdapter() {

        public boolean touchDown(int screenX, int screenY, int pointer, int button) {
            seed = MathUtils.random.nextLong();
            System.out.println(seed);
            triangulate();
            return true;
        }

        public boolean mouseMoved(int screenX, int screenY) {
            triangulate();
            return false;
        }
    });
}
