private void writeRect(FileWriter writer, Page page, Rect rect, String name) throws IOException {
    writer.write(Rect.getAtlasName(name, settings.flattenPaths) + "\n");
    writer.write("  rotate: " + rect.rotated + "\n");
    writer.write("  xy: " + (page.x + rect.x) + ", " + (page.y + page.height - rect.height - rect.y) + "\n");
    writer.write("  size: " + rect.regionWidth + ", " + rect.regionHeight + "\n");
    if (rect.splits != null) {
        writer.write(// 
        "  split: " + rect.splits[0] + ", " + rect.splits[1] + ", " + rect.splits[2] + ", " + rect.splits[3] + "\n");
    }
    if (rect.pads != null) {
        if (rect.splits == null)
            writer.write("  split: 0, 0, 0, 0\n");
        writer.write("  pad: " + rect.pads[0] + ", " + rect.pads[1] + ", " + rect.pads[2] + ", " + rect.pads[3] + "\n");
    }
    writer.write("  orig: " + rect.originalWidth + ", " + rect.originalHeight + "\n");
    writer.write("  offset: " + rect.offsetX + ", " + (rect.originalHeight - rect.regionHeight - rect.offsetY) + "\n");
    writer.write("  index: " + rect.index + "\n");
}
