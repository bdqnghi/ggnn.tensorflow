public static void main(String[] args) throws Exception {
    if (args.length != 1) {
        HeaderFixer.process("../../gdx/");
        HeaderFixer.process("../../backends/");
        HeaderFixer.process("../../tests/");
        HeaderFixer.process("../../extensions/");
    } else {
        HeaderFixer.process(args[0]);
    }
    System.out.println("Changed " + filesChanged + " / " + filesScanned + " files.");
}
