@Override
public void consumeCustomData(int target) {
    if (compressedData == null)
        throw new GdxRuntimeException("Call prepare() before calling consumeCompressedData()");
    IntBuffer buffer = BufferUtils.newIntBuffer(16);
    // Check OpenGL type and format, detect compressed data format (no type & format)
    boolean compressed = false;
    if (glType == 0 || glFormat == 0) {
        if (glType + glFormat != 0)
            throw new GdxRuntimeException("either both or none of glType, glFormat must be zero");
        compressed = true;
    }
    // find OpenGL texture target and dimensions
    int textureDimensions = 1;
    int glTarget = GL_TEXTURE_1D;
    if (pixelHeight > 0) {
        textureDimensions = 2;
        glTarget = GL20.GL_TEXTURE_2D;
    }
    if (pixelDepth > 0) {
        textureDimensions = 3;
        glTarget = GL_TEXTURE_3D;
    }
    if (numberOfFaces == 6) {
        if (textureDimensions == 2)
            glTarget = GL20.GL_TEXTURE_CUBE_MAP;
        else
            throw new GdxRuntimeException("cube map needs 2D faces");
    } else if (numberOfFaces != 1) {
        throw new GdxRuntimeException("numberOfFaces must be either 1 or 6");
    }
    if (numberOfArrayElements > 0) {
        if (glTarget == GL_TEXTURE_1D)
            glTarget = GL_TEXTURE_1D_ARRAY_EXT;
        else if (glTarget == GL20.GL_TEXTURE_2D)
            glTarget = GL_TEXTURE_2D_ARRAY_EXT;
        else
            throw new GdxRuntimeException("No API for 3D and cube arrays yet");
        textureDimensions++;
    }
    if (glTarget == 0x1234)
        throw new GdxRuntimeException("Unsupported texture format (only 2D texture are supported in LibGdx for the time being)");
    int singleFace = -1;
    if (numberOfFaces == 6 && target != GL20.GL_TEXTURE_CUBE_MAP) {
        // Load a single face of the cube (should be avoided since the data is unloaded afterwards)
        if (!(GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X <= target && target <= GL20.GL_TEXTURE_CUBE_MAP_NEGATIVE_Z))
            throw new GdxRuntimeException("You must specify either GL_TEXTURE_CUBE_MAP to bind all 6 faces of the cube or the requested face GL_TEXTURE_CUBE_MAP_POSITIVE_X and followings.");
        singleFace = target - GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X;
        target = GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X;
    } else if (numberOfFaces == 6 && target == GL20.GL_TEXTURE_CUBE_MAP) {
        // Load the 6 faces
        target = GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X;
    } else {
        // Load normal texture
        if (target != glTarget && !(GL20.GL_TEXTURE_CUBE_MAP_POSITIVE_X <= target && target <= GL20.GL_TEXTURE_CUBE_MAP_NEGATIVE_Z && target == GL20.GL_TEXTURE_2D))
            throw new GdxRuntimeException("Invalid target requested : 0x" + Integer.toHexString(target) + ", expecting : 0x" + Integer.toHexString(glTarget));
    }
    // KTX files require an unpack alignment of 4
    Gdx.gl.glGetIntegerv(GL20.GL_UNPACK_ALIGNMENT, buffer);
    int previousUnpackAlignment = buffer.get(0);
    if (previousUnpackAlignment != 4)
        Gdx.gl.glPixelStorei(GL20.GL_UNPACK_ALIGNMENT, 4);
    int glInternalFormat = this.glInternalFormat;
    int glFormat = this.glFormat;
    int pos = imagePos;
    for (int level = 0; level < numberOfMipmapLevels; level++) {
        int pixelWidth = Math.max(1, this.pixelWidth >> level);
        int pixelHeight = Math.max(1, this.pixelHeight >> level);
        int pixelDepth = Math.max(1, this.pixelDepth >> level);
        compressedData.position(pos);
        int faceLodSize = compressedData.getInt();
        int faceLodSizeRounded = (faceLodSize + 3) & ~3;
        pos += 4;
        for (int face = 0; face < numberOfFaces; face++) {
            compressedData.position(pos);
            pos += faceLodSizeRounded;
            if (singleFace != -1 && singleFace != face)
                continue;
            ByteBuffer data = compressedData.slice();
            data.limit(faceLodSizeRounded);
            if (textureDimensions == 1) {
            // if (compressed)
            // Gdx.gl.glCompressedTexImage1D(target + face, level, glInternalFormat, pixelWidth, 0, faceLodSize,
            // data);
            // else
            // Gdx.gl.glTexImage1D(target + face, level, glInternalFormat, pixelWidth, 0, glFormat, glType, data);
            } else if (textureDimensions == 2) {
                if (numberOfArrayElements > 0)
                    pixelHeight = numberOfArrayElements;
                if (compressed) {
                    if (glInternalFormat == ETC1.ETC1_RGB8_OES) {
                        if (!Gdx.graphics.supportsExtension("GL_OES_compressed_ETC1_RGB8_texture")) {
                            ETC1Data etcData = new ETC1Data(pixelWidth, pixelHeight, data, 0);
                            Pixmap pixmap = ETC1.decodeImage(etcData, Format.RGB888);
                            Gdx.gl.glTexImage2D(target + face, level, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
                            pixmap.dispose();
                        } else {
                            Gdx.gl.glCompressedTexImage2D(target + face, level, glInternalFormat, pixelWidth, pixelHeight, 0, faceLodSize, data);
                        }
                    } else {
                        // Try to load (no software unpacking fallback)
                        Gdx.gl.glCompressedTexImage2D(target + face, level, glInternalFormat, pixelWidth, pixelHeight, 0, faceLodSize, data);
                    }
                } else
                    Gdx.gl.glTexImage2D(target + face, level, glInternalFormat, pixelWidth, pixelHeight, 0, glFormat, glType, data);
            } else if (textureDimensions == 3) {
                if (numberOfArrayElements > 0)
                    pixelDepth = numberOfArrayElements;
            // if (compressed)
            // Gdx.gl.glCompressedTexImage3D(target + face, level, glInternalFormat, pixelWidth, pixelHeight, pixelDepth, 0,
            // faceLodSize, data);
            // else
            // Gdx.gl.glTexImage3D(target + face, level, glInternalFormat, pixelWidth, pixelHeight, pixelDepth, 0, glFormat,
            // glType, data);
            }
        }
    }
    if (previousUnpackAlignment != 4)
        Gdx.gl.glPixelStorei(GL20.GL_UNPACK_ALIGNMENT, previousUnpackAlignment);
    if (useMipMaps())
        Gdx.gl.glGenerateMipmap(target);
    // dispose data once transfered to GPU
    disposePreparedData();
}
