/**
 * Checks the command line arguments for correctness.
 * @return 0 If arguments are invalid, Number of arguments otherwise.
 */
private int parseArguments(String[] args) {
    int numArgs = args.length;
    // check if number of args is right
    if (numArgs < 1)
        return 0;
    // check if the input file's extension is right
    boolean extension = args[0].substring(args[0].length() - ATLAS_FILE_EXTENSION.length()).equals(ATLAS_FILE_EXTENSION);
    // check if the directory names are valid
    boolean directory = true;
    if (numArgs >= 2)
        directory &= checkDirectoryValidity(args[1]);
    if (numArgs == 3)
        directory &= checkDirectoryValidity(args[2]);
    return extension && directory ? numArgs : 0;
}
