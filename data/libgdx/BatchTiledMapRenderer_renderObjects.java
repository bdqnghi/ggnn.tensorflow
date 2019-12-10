@Override
public void renderObjects(MapLayer layer) {
    for (MapObject object : layer.getObjects()) {
        renderObject(object);
    }
}
