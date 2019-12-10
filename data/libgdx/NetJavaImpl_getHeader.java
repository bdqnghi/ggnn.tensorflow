@Override
public String getHeader(String name) {
    return connection.getHeaderField(name);
}
