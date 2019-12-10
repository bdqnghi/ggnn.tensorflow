@Override
public void create() {
    super.create();
    showAxes = false;
    shapeRenderer = new ShapeRenderer();
    shapeRenderer.setColor(Color.WHITE);
    onModelClicked("g3d/knight.g3db");
}
