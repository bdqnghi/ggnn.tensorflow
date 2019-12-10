/**
 * @return whether this ETC1Data has a PKM header
 */
public boolean hasPKMHeader() {
    return dataOffset == 16;
}
