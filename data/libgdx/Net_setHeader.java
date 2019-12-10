/**
 * Sets a header to this HTTP request, see {@link HttpRequestHeader}.
 * @param name the name of the header.
 * @param value the value of the header.
 */
public void setHeader(String name, String value) {
    headers.put(name, value);
}
