private CMethod parseCMethod(String headerFile, int start) {
    int headEnd = headerFile.indexOf('(', start);
    String head = headerFile.substring(start, headEnd).trim();
    String returnType = head.split(" ")[1].trim();
    int argsStart = headEnd + 1;
    int argsEnd = headerFile.indexOf(')', argsStart);
    String[] args = headerFile.substring(argsStart, argsEnd).split(",");
    return new CMethod(returnType, head, args, start, argsEnd + 1);
}
