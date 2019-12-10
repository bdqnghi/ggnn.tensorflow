public static void main(String[] args) throws Exception {
    if (args.length != 2) {
        System.out.println("ETC1Compressor <input-dir> <output-dir>");
        System.exit(-1);
    }
    ETC1Compressor.process(args[0], args[1], true, false);
}
