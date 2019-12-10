private void check(Matrix4 mat1, Matrix4 mat2) {
    for (int i = 0; i < 16; i++) {
        if (mat1.val[i] != mat2.val[i])
            throw new GdxRuntimeException("matrices not equal");
    }
}
