public void writeDouble(double v) throws IOException {
    writeLong(Double.doubleToLongBits(v));
}
