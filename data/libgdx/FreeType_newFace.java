/*
			FT_Done_FreeType((FT_Library)library);
		*/
public Face newFace(FileHandle font, int faceIndex) {
    byte[] data = font.readBytes();
    return newMemoryFace(data, data.length, faceIndex);
}
