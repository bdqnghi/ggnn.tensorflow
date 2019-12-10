/**
 * @see java.io.InputStream#available()
 */
public int available() {
    return endOfStream ? 0 : 1;
}
