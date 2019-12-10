/**
 * Returns a WebGL context for the given canvas element. Returns null if no 3d context is available.
 */
public static WebGLRenderingContext getContext(CanvasElement canvas) {
    return getContext(canvas, WebGLContextAttributes.create());
}
