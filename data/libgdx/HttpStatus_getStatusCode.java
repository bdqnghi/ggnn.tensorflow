/**
 * Returns the status code of the HTTP response, normally 2xx status codes indicate success while 4xx and 5xx indicate client
 * and server errors, respectively (see <a href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec10.html">HTTP/1.1: Status Code
 * Definitions</a> for more information about HTTP status codes).
 */
public int getStatusCode() {
    return statusCode;
}
