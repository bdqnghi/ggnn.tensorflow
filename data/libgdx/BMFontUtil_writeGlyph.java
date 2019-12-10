void writeGlyph(PrintStream out, int pageWidth, int pageHeight, int pageIndex, Glyph glyph) {
    out.println(// 
    "char id=" + String.format("%-6s", glyph.getCodePoint()) + "x=" + // 
    String.format("%-5s", (int) (glyph.getU() * pageWidth)) + "y=" + // 
    String.format("%-5s", (int) (glyph.getV() * pageHeight)) + "width=" + // 
    String.format("%-5s", glyph.getWidth()) + "height=" + // 
    String.format("%-5s", glyph.getHeight()) + "xoffset=" + // 
    String.format("%-5s", glyph.getXOffset()) + "yoffset=" + // 
    String.format("%-5s", glyph.getYOffset()) + "xadvance=" + // 
    String.format("%-5s", glyph.getXAdvance()) + "page=" + // 
    String.format("%-5s", pageIndex) + "chnl=0 ");
}
