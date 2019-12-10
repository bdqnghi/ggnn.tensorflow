// @Override
// public void glGetProgramBinary(int program, int bufSize, int[] length, int lengthOffset, int[] binaryFormat, int
// binaryFormatOffset, java.nio.Buffer binary) {
// GLES30.glGetProgramBinary(program, bufSize, length, lengthOffset, binaryFormat, binaryFormatOffset, binary);
// }
// 
// @Override
// public void glGetProgramBinary(int program, int bufSize, java.nio.IntBuffer length, java.nio.IntBuffer binaryFormat,
// java.nio.Buffer binary) {
// GLES30.glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
// }
// @Override
// public void glProgramBinary(int program, int binaryFormat, java.nio.Buffer binary, int length) {
// GLES30.glProgramBinary(program, binaryFormat, binary, length);
// }
@Override
public void glProgramParameteri(int program, int pname, int value) {
    GLES30.glProgramParameteri(program, pname, value);
}
