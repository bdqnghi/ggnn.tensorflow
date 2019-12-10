public void glReadPixels(int x, int y, int width, int height, int format, int type, Buffer pixels) {
    if (pixels instanceof ByteBuffer)
        GL11.glReadPixels(x, y, width, height, format, type, (ByteBuffer) pixels);
    else if (pixels instanceof ShortBuffer)
        GL11.glReadPixels(x, y, width, height, format, type, (ShortBuffer) pixels);
    else if (pixels instanceof IntBuffer)
        GL11.glReadPixels(x, y, width, height, format, type, (IntBuffer) pixels);
    else if (pixels instanceof FloatBuffer)
        GL11.glReadPixels(x, y, width, height, format, type, (FloatBuffer) pixels);
    else
        throw new GdxRuntimeException("Can't use " + pixels.getClass().getName() + " with this method. Use ByteBuffer, ShortBuffer, IntBuffer or FloatBuffer instead. Blame LWJGL");
}
