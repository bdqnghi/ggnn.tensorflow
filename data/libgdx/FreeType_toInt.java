/*
		FT_Library library = 0;
		FT_Error error = FT_Init_FreeType(&library);
		if(error) return 0;
		else return (jlong)library;
	*/
public static int toInt(int value) {
    return ((value + 63) & -64) >> 6;
}
