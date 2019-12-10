private static int[] convertTools(String toolsVersion) {
    String[] stringSplit = toolsVersion.split("\\.");
    int[] versionSplit = new int[3];
    if (stringSplit.length == 3) {
        try {
            versionSplit[0] = Integer.parseInt(stringSplit[0]);
            versionSplit[1] = Integer.parseInt(stringSplit[1]);
            versionSplit[2] = Integer.parseInt(stringSplit[2]);
            return versionSplit;
        } catch (NumberFormatException nfe) {
            return new int[] { 0, 0, 0 };
        }
    } else {
        return new int[] { 0, 0, 0 };
    }
}
