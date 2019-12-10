/*
			FT_Face face = 0;
			FT_Error error = FT_New_Memory_Face((FT_Library)library, (const FT_Byte*)data, dataSize, faceIndex, &face);
			if(error) return 0;
			else return (jlong)face;
		*/
public Stroker createStroker() {
    long stroker = strokerNew(address);
    if (stroker == 0)
        throw new GdxRuntimeException("Couldn't create FreeType stroker");
    return new Stroker(stroker);
}
