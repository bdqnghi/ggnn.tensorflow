public static void arraycopy(Object src, int srcOfs, Object dest, int destOfs, int len) {
    if (src == null || dest == null) {
        throw new NullPointerException();
    }
    Class<?> srcType = src.getClass();
    Class<?> destType = dest.getClass();
    if (!srcType.isArray() || !destType.isArray()) {
        throw new ArrayStoreException("Must be array types");
    }
    Class<?> srcComp = srcType.getComponentType();
    Class<?> destComp = destType.getComponentType();
    if (srcComp.modifiers != destComp.modifiers || (srcComp.isPrimitive() && !srcComp.equals(destComp))) {
        throw new ArrayStoreException("Array types must match");
    }
    int srclen = getArrayLength(src);
    int destlen = getArrayLength(dest);
    if (srcOfs < 0 || destOfs < 0 || len < 0 || srcOfs + len > srclen || destOfs + len > destlen) {
        throw new IndexOutOfBoundsException();
    }
    /*
     * If the arrays are not references or if they are exactly the same type, we
     * can copy them in native code for speed. Otherwise, we have to copy them
     * in Java so we get appropriate errors.
     */
    if ((!srcComp.isPrimitive() || srcComp.isArray()) && !srcType.equals(destType)) {
        // copy in Java to make sure we get ArrayStoreExceptions if the values
        // aren't compatible
        Object[] srcArray = (Object[]) src;
        Object[] destArray = (Object[]) dest;
        if (src == dest && srcOfs < destOfs) {
            // TODO(jat): how does backward copies handle failures in the middle?
            // copy backwards to avoid destructive copies
            srcOfs += len;
            for (int destEnd = destOfs + len; destEnd-- > destOfs; ) {
                destArray[destEnd] = srcArray[--srcOfs];
            }
        } else {
            for (int destEnd = destOfs + len; destOfs < destEnd; ) {
                destArray[destOfs++] = srcArray[srcOfs++];
            }
        }
    } else {
        nativeArraycopy(src, srcOfs, dest, destOfs, len);
    }
}
