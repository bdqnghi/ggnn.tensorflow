public String getArrayCType() {
    if (!this.isPrimitiveArray())
        throw new RuntimeException("ArgumentType " + this + " is not an Array!");
    if (this == BooleanArray)
        return "bool*";
    if (this == ByteArray)
        return "char*";
    if (this == CharArray)
        return "unsigned short*";
    if (this == ShortArray)
        return "short*";
    if (this == IntegerArray)
        return "int*";
    if (this == LongArray)
        return "long long*";
    if (this == FloatArray)
        return "float*";
    if (this == DoubleArray)
        return "double*";
    throw new RuntimeException("Unknown Array type " + this);
}
