@Override
public synchronized byte[] toByteArray() {
    if (count == buf.length)
        return buf;
    return super.toByteArray();
}
