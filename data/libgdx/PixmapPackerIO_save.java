/**
 * Saves the provided PixmapPacker to the provided file. The resulting file will use the standard TextureAtlas file format and
 * can be loaded by TextureAtlas as if it had been created using TexturePacker.
 *
 * @param file the file to which the atlas descriptor will be written, images will be written as siblings
 * @param packer the PixmapPacker to be written
 * @param parameters the SaveParameters specifying how to save the PixmapPacker
 * @throws IOException if the atlas file can not be written
 */
public void save(FileHandle file, PixmapPacker packer, SaveParameters parameters) throws IOException {
    Writer writer = file.writer(false);
    int index = 0;
    for (Page page : packer.pages) {
        if (page.rects.size > 0) {
            FileHandle pageFile = file.sibling(file.nameWithoutExtension() + "_" + (++index) + parameters.format.getExtension());
            switch(parameters.format) {
                case CIM:
                    {
                        PixmapIO.writeCIM(pageFile, page.image);
                        break;
                    }
                case PNG:
                    {
                        PixmapIO.writePNG(pageFile, page.image);
                        break;
                    }
            }
            writer.write("\n");
            writer.write(pageFile.name() + "\n");
            writer.write("size: " + page.image.getWidth() + "," + page.image.getHeight() + "\n");
            writer.write("format: " + packer.pageFormat.name() + "\n");
            writer.write("filter: " + parameters.minFilter.name() + "," + parameters.magFilter.name() + "\n");
            writer.write("repeat: none" + "\n");
            for (String name : page.rects.keys()) {
                writer.write(name + "\n");
                Rectangle rect = page.rects.get(name);
                writer.write("rotate: false" + "\n");
                writer.write("xy: " + (int) rect.x + "," + (int) rect.y + "\n");
                writer.write("size: " + (int) rect.width + "," + (int) rect.height + "\n");
                writer.write("orig: " + (int) rect.width + "," + (int) rect.height + "\n");
                writer.write("offset: 0, 0" + "\n");
                writer.write("index: -1" + "\n");
            }
        }
    }
    writer.close();
}
