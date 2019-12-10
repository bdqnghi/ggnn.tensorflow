/**
 * Prints usage information to standard output.
 */
private static void usage() {
    System.out.println("Generates a distance field image from a black and white input image.\n" + "The distance field image contains a solid color and stores the distance\n" + "in the alpha channel.\n" + "\n" + "The output file format is inferred from the file name.\n" + "\n" + "Command line arguments: INFILE OUTFILE [OPTION...]\n" + "\n" + "Possible options:\n" + "  --color rrggbb    color of output image (default: ffffff)\n" + "  --downscale n     downscale by factor of n (default: 1)\n" + "  --spread n        edge scan distance (default: 1)\n");
}
