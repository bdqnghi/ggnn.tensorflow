@Override
public void render() {
    Gdx.gl.glClearColor(0.55f, 0.55f, 0.55f, 1f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    shapeRenderer.setProjectionMatrix(camera.combined);
    batch.setProjectionMatrix(camera.combined);
    shapeRenderer.setColor(Color.BLUE);
    Gdx.gl20.glLineWidth(2);
    MapLayer layer = map.getLayers().get("Objects");
    AnimatedTiledMapTile.updateAnimationBaseTime();
    for (MapObject mapObject : layer.getObjects()) {
        if (mapObject instanceof TiledMapTileMapObject) {
            batch.begin();
            TiledMapTileMapObject tmtObject = (TiledMapTileMapObject) mapObject;
            TextureRegion textureRegion = tmtObject.getTile().getTextureRegion();
            // TilEd rotation is clockwise, we need counter-clockwise.
            float rotation = -tmtObject.getRotation();
            float scaleX = tmtObject.getScaleX();
            float scaleY = tmtObject.getScaleY();
            float xPos = tmtObject.getX();
            float yPos = tmtObject.getY();
            textureRegion.flip(tmtObject.isFlipHorizontally(), tmtObject.isFlipVertically());
            batch.draw(textureRegion, xPos, yPos, tmtObject.getOriginX() * scaleX, tmtObject.getOriginY() * scaleY, textureRegion.getRegionWidth() * scaleX, textureRegion.getRegionHeight() * scaleY, 1f, 1f, rotation);
            // We flip back to the original state.
            textureRegion.flip(tmtObject.isFlipHorizontally(), tmtObject.isFlipVertically());
            batch.end();
        } else if (mapObject instanceof EllipseMapObject) {
            shapeRenderer.begin(ShapeRenderer.ShapeType.Filled);
            Ellipse ellipse = ((EllipseMapObject) mapObject).getEllipse();
            shapeRenderer.ellipse(ellipse.x, ellipse.y, ellipse.width, ellipse.height);
            shapeRenderer.end();
        } else if (mapObject instanceof RectangleMapObject) {
            shapeRenderer.begin(ShapeRenderer.ShapeType.Filled);
            Rectangle rectangle = ((RectangleMapObject) mapObject).getRectangle();
            shapeRenderer.rect(rectangle.x, rectangle.y, rectangle.width, rectangle.height);
            shapeRenderer.end();
        } else if (mapObject instanceof PolygonMapObject) {
            shapeRenderer.begin(ShapeRenderer.ShapeType.Line);
            Polygon polygon = ((PolygonMapObject) mapObject).getPolygon();
            shapeRenderer.polygon(polygon.getTransformedVertices());
            shapeRenderer.end();
        }
    }
    batch.begin();
    font.draw(batch, "FPS: " + Gdx.graphics.getFramesPerSecond(), 10, 20);
    batch.end();
}
