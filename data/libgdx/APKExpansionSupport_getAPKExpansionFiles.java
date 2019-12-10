static String[] getAPKExpansionFiles(Context ctx, int mainVersion, int patchVersion) {
    String packageName = ctx.getPackageName();
    Vector<String> ret = new Vector<String>();
    if (Environment.getExternalStorageState().equals(Environment.MEDIA_MOUNTED)) {
        // Build the full path to the app's expansion files
        File root = Environment.getExternalStorageDirectory();
        File expPath = new File(root.toString() + EXP_PATH + packageName);
        // Check that expansion file path exists
        if (expPath.exists()) {
            if (mainVersion > 0) {
                String strMainPath = expPath + File.separator + "main." + mainVersion + "." + packageName + ".obb";
                File main = new File(strMainPath);
                if (main.isFile()) {
                    ret.add(strMainPath);
                }
            }
            if (patchVersion > 0) {
                String strPatchPath = expPath + File.separator + "patch." + mainVersion + "." + packageName + ".obb";
                File main = new File(strPatchPath);
                if (main.isFile()) {
                    ret.add(strPatchPath);
                }
            }
        }
    }
    String[] retArray = new String[ret.size()];
    ret.toArray(retArray);
    return retArray;
}
