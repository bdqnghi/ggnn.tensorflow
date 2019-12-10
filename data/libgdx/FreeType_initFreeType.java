public static Library initFreeType() {
    new SharedLibraryLoader().load("gdx-freetype");
    long address = initFreeTypeJni();
    if (address == 0)
        throw new GdxRuntimeException("Couldn't initialize FreeType library");
    else
        return new Library(address);
}
