private void parseArgs(String[] args) {
    float scale = 1f;
    for (int i = 0; i < args.length; i++) {
        final String param = args[i];
        final boolean more = i < args.length - 1;
        if (param.equals("-b") || param.equals("--batch")) {
            batchMode = true;
        } else if (more && (param.equals("-s") || param.equals("--scale"))) {
            scale = Float.parseFloat(args[++i]);
        } else if (more && (param.equals("-i") || param.equals("--input"))) {
            File f = new File(args[++i]);
            open(f);
            fontFileRadio.setText("");
            updateFont();
        } else if (more && (param.equals("-o") || param.equals("--output"))) {
            File f = new File(args[++i]);
            saveBm(f);
        } else {
            System.err.println("Unknown parameter: " + param);
            exit(3);
        }
    }
    fontSizeSpinner.setValue((int) (0.5f + Math.max(4, scale * ((Integer) fontSizeSpinner.getValue()))));
}
