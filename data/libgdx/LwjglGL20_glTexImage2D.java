public void glTexImage2D(int target, int level, int internalformat, int width, int height, int border, int format, int type, Buffer pixels) {
    if (pixels == null)
        GL11.glTexImage2D(target, level, internalformat, width, height, border, format, type, (ByteBuffer) null);
    else if (pixels instanceof ByteBuffer)
        GL11.glTexImage2D(target, level, internalformat, width, height, border, format, type, (ByteBuffer) pixels);
    else if (pixels instanceof ShortBuffer)
        GL11.glTexImage2D(target, level, internalformat, width, height, border, format, type, (ShortBuffer) pixels);
    else if (pixels instanceof IntBuffer)
        GL11.glTexImage2D(target, level, internalformat, width, height, border, format, type, (IntBuffer) pixels);
    else if (pixels instanceof FloatBuffer)
        GL11.glTexImage2D(target, level, internalformat, width, height, border, format, type, (FloatBuffer) pixels);
    else if (pixels instanceof DoubleBuffer)
        GL11.glTexImage2D(target, level, internalformat, width, height, border, format, type, (DoubleBuffer) pixels);
    else
        throw new GdxRuntimeException("Can't use " + pixels.getClass().getName() + " with this method. Use ByteBuffer, ShortBuffer, IntBuffer, FloatBuffer or DoubleBuffer instead. Blame LWJGL");
}
