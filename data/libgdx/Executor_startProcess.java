private static boolean startProcess(String[] commands, File directory, final CharCallback callback) {
    try {
        final Process process = new ProcessBuilder(commands).redirectErrorStream(true).directory(directory).start();
        Thread t = new Thread(new Runnable() {

            @Override
            public void run() {
                BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()), 1);
                try {
                    int c = 0;
                    while ((c = reader.read()) != -1) {
                        callback.character((char) c);
                    }
                } catch (IOException e) {
                // e.printStackTrace();
                }
            }
        });
        t.setDaemon(true);
        t.start();
        process.waitFor();
        t.interrupt();
        return process.exitValue() == 0;
    } catch (Exception e) {
        e.printStackTrace();
        return false;
    }
}
