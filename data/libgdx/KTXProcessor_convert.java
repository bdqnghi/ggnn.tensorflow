public static void convert(String inPx, String inNx, String inPy, String inNy, String inPz, String inNz, String output, boolean genMipmaps, boolean packETC1, boolean genAlphaAtlas) throws Exception {
    Array<String> opts = new Array<String>(String.class);
    opts.add(inPx);
    opts.add(inNx);
    opts.add(inPy);
    opts.add(inNy);
    opts.add(inPz);
    opts.add(inNz);
    opts.add(output);
    if (genMipmaps)
        opts.add("-mipmaps");
    if (packETC1 && !genAlphaAtlas)
        opts.add("-etc1");
    if (packETC1 && genAlphaAtlas)
        opts.add("-etc1a");
    main(opts.toArray());
}
