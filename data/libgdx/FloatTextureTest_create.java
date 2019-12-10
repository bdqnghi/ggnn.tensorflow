@Override
public void create() {
    fb = new FrameBuffer(Format.RGBA8888, 200, 100, false);
    ffb = new FloatFrameBuffer(200, 100, false);
    // @off
    String vertexShader = "attribute vec4 a_position; " + "varying vec2 v_position; " + "void main(){ " + "    v_position = a_position.xy; " + "    gl_Position = vec4(a_position.x, a_position.y, 0.0, 1.0); " + "}";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "uniform vec3 u_color;" + "uniform vec2 u_viewport; " + "void main(void){ " + "    vec2 uv = gl_FragCoord.xy/u_viewport; " + // <--- // regular (non-float) texture loses precision here, res == 0 for every fragment
    "    float res = mix(0.0, 0.0001, uv.x); " + "    gl_FragColor = vec4(u_color, res); " + "}";
    fbshader = new ShaderProgram(vertexShader, fragmentShader);
    vertexShader = "attribute vec4 a_position; " + "attribute vec4 a_color; " + "attribute vec2 a_texCoords; " + "uniform mat4 u_worldView; " + "varying vec4 v_color; " + "varying vec2 v_texCoords; " + "void main() " + "{ " + "    v_color = a_color; " + "    v_texCoords = a_texCoords; " + "    gl_Position =  u_worldView * a_position; " + "}";
    fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "varying vec2 v_texCoords; " + "uniform sampler2D u_fbtex, u_ffbtex; " + "vec4 getValue(vec4 col) {" + "    if (col.a > 0.00005)" + "        return vec4(col.rgb, 1.0);" + "    else" + "        return vec4(0.0, 0.0, 0.0, 1.0);" + "}" + "void main() " + "{ " + "    if (v_texCoords.y < 0.45)" + "        gl_FragColor = getValue(texture2D(u_fbtex, v_texCoords)); " + "    else if (v_texCoords.y > 0.55)" + "        gl_FragColor = getValue(texture2D(u_ffbtex, v_texCoords)); " + "}";
    // @on
    shader = new ShaderProgram(vertexShader, fragmentShader);
    createQuad();
    screenCamera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    createScreenQuad();
}
