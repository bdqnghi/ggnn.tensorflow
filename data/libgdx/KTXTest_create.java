@Override
public void create() {
    // Cubemap test
    String cubemapVS = // 
    "" + // 
    "attribute vec3 a_position;\n" + // 
    "uniform mat4 u_projViewTrans;\n" + // 
    "uniform mat4 u_worldTrans;\n" + // 
    "\n" + // 
    "varying vec3 v_cubeMapUV;\n" + // 
    "\n" + // 
    "void main() {\n" + // 
    "   vec4 g_position = vec4(a_position, 1.0);\n" + // 
    "   g_position = u_worldTrans * g_position;\n" + // 
    "   v_cubeMapUV = normalize(g_position.xyz);\n" + // 
    "   gl_Position = u_projViewTrans * g_position;\n" + "}";
    String cubemapFS = // 
    "" + // 
    "#ifdef GL_ES\n" + // 
    "precision mediump float;\n" + // 
    "#endif\n" + // 
    "uniform samplerCube u_environmentCubemap;\n" + // 
    "varying vec3 v_cubeMapUV;\n" + // 
    "void main() {\n" + // 
    "	gl_FragColor = vec4(textureCube(u_environmentCubemap, v_cubeMapUV).rgb, 1.0);\n" + "}\n";
    modelBatch = new ModelBatch(new DefaultShaderProvider(new Config(cubemapVS, cubemapFS)));
    cubemap = new Cubemap(new KTXTextureData(Gdx.files.internal("data/cubemap.zktx"), true));
    cubemap.setFilter(TextureFilter.MipMapLinearLinear, TextureFilter.Linear);
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.1f, 0.1f, 0.1f, 1.f));
    environment.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -0.5f, -1.0f, -0.8f));
    environment.set(new CubemapAttribute(CubemapAttribute.EnvironmentMap, cubemap));
    perspectiveCamera = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    perspectiveCamera.position.set(10f, 10f, 10f);
    perspectiveCamera.lookAt(0, 0, 0);
    perspectiveCamera.near = 0.1f;
    perspectiveCamera.far = 300f;
    perspectiveCamera.update();
    ModelBuilder modelBuilder = new ModelBuilder();
    model = modelBuilder.createBox(5f, 5f, 5f, new Material(ColorAttribute.createDiffuse(Color.GREEN)), Usage.Position | Usage.Normal);
    instance = new ModelInstance(model);
    Gdx.input.setInputProcessor(new InputMultiplexer(this, inputController = new CameraInputController(perspectiveCamera)));
    // 2D texture test
    String etc1aVS = // 
    "" + // 
    "uniform mat4 u_projTrans;\n" + // 
    "\n" + // 
    "attribute vec4 a_position;\n" + // 
    "attribute vec2 a_texCoord0;\n" + // 
    "attribute vec4 a_color;\n" + // 
    "\n" + // 
    "varying vec4 v_color;\n" + // 
    "varying vec2 v_texCoord;\n" + // 
    "\n" + // 
    "void main() {\n" + // 
    "   gl_Position = u_projTrans * a_position;\n" + // 
    "   v_texCoord = a_texCoord0;\n" + // 
    "   v_color = a_color;\n" + // 
    "}\n";
    String etc1aFS = // 
    "" + // 
    "#ifdef GL_ES\n" + // 
    "precision mediump float;\n" + // 
    "#endif\n" + // 
    "uniform sampler2D u_texture;\n" + // 
    "\n" + // 
    "varying vec4 v_color;\n" + // 
    "varying vec2 v_texCoord;\n" + // 
    "\n" + // 
    "void main() {\n" + // 
    "   vec3 col = texture2D(u_texture, v_texCoord.st).rgb;\n" + // 
    "   float alpha = texture2D(u_texture, v_texCoord.st + vec2(0.0, 0.5)).r;\n" + // 
    "   gl_FragColor = vec4(col, alpha) * v_color;\n" + // 
    "}\n";
    etc1aShader = new ShaderProgram(etc1aVS, etc1aFS);
    orthoCamera = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    image = new Texture("data/egg.zktx");
    batch = new SpriteBatch(100, etc1aShader);
}
