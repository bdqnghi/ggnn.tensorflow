private static String readBuildToolsVersion(File parentFile) {
    File properties = new File(parentFile, "source.properties");
    FileReader reader;
    BufferedReader buffer;
    try {
        reader = new FileReader(properties);
        buffer = new BufferedReader(reader);
        String line = null;
        while ((line = buffer.readLine()) != null) {
            if (line.contains("Pkg.Revision")) {
                String versionString = line.split("\\=")[1];
                int count = versionString.split("\\.").length;
                for (int i = 0; i < 3 - count; i++) {
                    versionString += ".0";
                }
                buffer.close();
                reader.close();
                return versionString;
            }
        }
    } catch (FileNotFoundException e) {
        e.printStackTrace();
    } catch (IOException e) {
        e.printStackTrace();
    }
    return "0.0.0";
}
