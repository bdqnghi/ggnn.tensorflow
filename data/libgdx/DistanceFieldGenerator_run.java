/**
 * Runs the program.
 * @param args command line arguments
 * @throws CommandLineArgumentException if the command line contains an error
 */
private static void run(String[] args) {
    DistanceFieldGenerator generator = new DistanceFieldGenerator();
    String inputFile = null;
    String outputFile = null;
    int i = 0;
    try {
        for (; i < args.length; ++i) {
            String arg = args[i];
            if (arg.startsWith("-")) {
                if ("--help".equals(arg)) {
                    usage();
                    System.exit(0);
                } else if ("--color".equals(arg)) {
                    ++i;
                    generator.setColor(new Color(Integer.parseInt(args[i], 16)));
                } else if ("--downscale".equals(arg)) {
                    ++i;
                    generator.setDownscale(Integer.parseInt(args[i]));
                } else if ("--spread".equals(arg)) {
                    ++i;
                    generator.setSpread(Float.parseFloat(args[i]));
                } else {
                    throw new CommandLineArgumentException("unknown option " + arg);
                }
            } else {
                if (inputFile == null) {
                    inputFile = arg;
                } else if (outputFile == null) {
                    outputFile = arg;
                } else {
                    throw new CommandLineArgumentException("exactly two file names are expected");
                }
            }
        }
    } catch (IndexOutOfBoundsException e) {
        throw new CommandLineArgumentException("option " + args[args.length - 1] + " requires an argument");
    } catch (NumberFormatException e) {
        throw new CommandLineArgumentException(args[i] + " is not a number");
    }
    if (inputFile == null) {
        throw new CommandLineArgumentException("no input file specified");
    }
    if (outputFile == null) {
        throw new CommandLineArgumentException("no output file specified");
    }
    String outputFormat = outputFile.substring(outputFile.lastIndexOf('.') + 1);
    boolean exists;
    if (!ImageIO.getImageWritersByFormatName(outputFormat).hasNext()) {
        throw new RuntimeException("No image writers found that can handle the format '" + outputFormat + "'");
    }
    BufferedImage input = null;
    try {
        input = ImageIO.read(new File(inputFile));
    } catch (IOException e) {
        System.err.println("Failed to load image: " + e.getMessage());
    }
    BufferedImage output = generator.generateDistanceField(input);
    try {
        ImageIO.write(output, outputFormat, new File(outputFile));
    } catch (IOException e) {
        System.err.println("Failed to write output image: " + e.getMessage());
    }
}
