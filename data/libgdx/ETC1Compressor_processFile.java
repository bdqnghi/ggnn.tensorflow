@Override
protected void processFile(Entry entry) throws Exception {
    System.out.println("Processing " + entry.inputFile);
    Pixmap pixmap = new Pixmap(new FileHandle(entry.inputFile));
    if (pixmap.getFormat() != Format.RGB888 && pixmap.getFormat() != Format.RGB565) {
        System.out.println("Converting from " + pixmap.getFormat() + " to RGB888!");
        Pixmap tmp = new Pixmap(pixmap.getWidth(), pixmap.getHeight(), Format.RGB888);
        tmp.drawPixmap(pixmap, 0, 0, 0, 0, pixmap.getWidth(), pixmap.getHeight());
        pixmap.dispose();
        pixmap = tmp;
    }
    ETC1.encodeImagePKM(pixmap).write(new FileHandle(entry.outputFile));
    pixmap.dispose();
}
