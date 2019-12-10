public btIDebugDraw.DefaultColors getDefaultColors() {
    return new btIDebugDraw.DefaultColors((getClass() == btIDebugDraw.class) ? LinearMathJNI.btIDebugDraw_getDefaultColors(swigCPtr, this) : LinearMathJNI.btIDebugDraw_getDefaultColorsSwigExplicitbtIDebugDraw(swigCPtr, this), true);
}
