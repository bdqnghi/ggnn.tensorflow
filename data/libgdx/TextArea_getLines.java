/**
 * Returns total number of lines that the text occupies *
 */
public int getLines() {
    return linesBreak.size / 2 + (newLineAtEnd() ? 1 : 0);
}
