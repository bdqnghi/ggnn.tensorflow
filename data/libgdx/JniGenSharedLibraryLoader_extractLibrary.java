private String extractLibrary(String sharedLibName) {
    String srcCrc = crc(JniGenSharedLibraryLoader.class.getResourceAsStream("/" + sharedLibName));
    File nativesDir = new File(System.getProperty("java.io.tmpdir") + "/jnigen/" + srcCrc);
    File nativeFile = new File(nativesDir, sharedLibName);
    String extractedCrc = null;
    if (nativeFile.exists()) {
        try {
            extractedCrc = crc(new FileInputStream(nativeFile));
        } catch (FileNotFoundException ignored) {
        }
    }
    if (extractedCrc == null || !extractedCrc.equals(srcCrc)) {
        try {
            // Extract native from classpath to temp dir.
            InputStream input = null;
            if (nativesJar == null)
                input = JniGenSharedLibraryLoader.class.getResourceAsStream("/" + sharedLibName);
            else
                input = getFromJar(nativesJar, sharedLibName);
            if (input == null)
                return null;
            nativeFile.getParentFile().mkdirs();
            FileOutputStream output = new FileOutputStream(nativeFile);
            byte[] buffer = new byte[4096];
            while (true) {
                int length = input.read(buffer);
                if (length == -1)
                    break;
                output.write(buffer, 0, length);
            }
            input.close();
            output.close();
        } catch (IOException ex) {
            ex.printStackTrace();
            throw new RuntimeException(ex);
        }
    }
    return nativeFile.exists() ? nativeFile.getAbsolutePath() : null;
}
