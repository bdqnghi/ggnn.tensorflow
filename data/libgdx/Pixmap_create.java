private void create(int width, int height, Format format2) {
    this.width = width;
    this.height = height;
    this.format = Format.RGBA8888;
    canvas = Canvas.createIfSupported();
    canvas.getCanvasElement().setWidth(width);
    canvas.getCanvasElement().setHeight(height);
    context = canvas.getContext2d();
    context.setGlobalCompositeOperation(getComposite());
    buffer = BufferUtils.newIntBuffer(1);
    id = nextId++;
    buffer.put(0, id);
    pixmaps.put(id, this);
}
