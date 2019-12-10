private static int readAPIVersion(File parentFile) {
    File properties = new File(parentFile, "source.properties");
    FileReader reader;
    BufferedReader buffer;
    try {
        reader = new FileReader(properties);
        buffer = new BufferedReader(reader);
        String line = null;
        while ((line = buffer.readLine()) != null) {
            if (line.contains("AndroidVersion.ApiLevel")) {
                String versionString = line.split("\\=")[1];
                int apiLevel = Integer.parseInt(versionString);
                buffer.close();
                reader.close();
                return apiLevel;
            }
        }
    } catch (FileNotFoundException e) {
        e.printStackTrace();
    } catch (IOException e) {
        e.printStackTrace();
    } catch (NumberFormatException e) {
        e.printStackTrace();
    }
    return 0;
}
