public void flush() {
    ShapeType type = shapeType;
    end();
    begin(type);
}
