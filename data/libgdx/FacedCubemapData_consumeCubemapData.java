@Override
public void consumeCubemapData() {
    for (int i = 0; i < data.length; i++) {
        if (data[i].getType() == TextureData.TextureDataType.Custom) {
            data[i].consumeCustomData(GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X + i);
        } else {
            Pixmap pixmap = data[i].consumePixmap();
            boolean disposePixmap = data[i].disposePixmap();
            if (data[i].getFormat() != pixmap.getFormat()) {
                Pixmap tmp = new Pixmap(pixmap.getWidth(), pixmap.getHeight(), data[i].getFormat());
                Blending blend = Pixmap.getBlending();
                Pixmap.setBlending(Blending.None);
                tmp.drawPixmap(pixmap, 0, 0, 0, 0, pixmap.getWidth(), pixmap.getHeight());
                Pixmap.setBlending(blend);
                if (data[i].disposePixmap())
                    pixmap.dispose();
                pixmap = tmp;
                disposePixmap = true;
            }
            Gdx.gl.glPixelStorei(GL20.GL_UNPACK_ALIGNMENT, 1);
            Gdx.gl.glTexImage2D(GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
        }
    }
}
