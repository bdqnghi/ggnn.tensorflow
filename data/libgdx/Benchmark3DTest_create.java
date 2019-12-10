@Override
public void create() {
    super.create();
    GLProfiler.enable();
    randomizeLights();
    cam.position.set(10, 10, 10);
    cam.lookAt(0, 0, 0);
    cam.update();
    showAxes = true;
    lighting = true;
    vertexCountLabel = new Label("Vertices: 999", skin);
    vertexCountLabel.setPosition(0, fpsLabel.getTop());
    hud.addActor(vertexCountLabel);
    textureBindsLabel = new Label("Texture bindings: 999", skin);
    textureBindsLabel.setPosition(0, vertexCountLabel.getTop());
    hud.addActor(textureBindsLabel);
    shaderSwitchesLabel = new Label("Shader switches: 999", skin);
    shaderSwitchesLabel.setPosition(0, textureBindsLabel.getTop());
    hud.addActor(shaderSwitchesLabel);
    drawCallsLabel = new Label("Draw calls: 999", skin);
    drawCallsLabel.setPosition(0, shaderSwitchesLabel.getTop());
    hud.addActor(drawCallsLabel);
    glCallsLabel = new Label("GL calls: 999", skin);
    glCallsLabel.setPosition(0, drawCallsLabel.getTop());
    hud.addActor(glCallsLabel);
    lightsLabel = new Label("Lights: 999", skin);
    lightsLabel.setPosition(0, glCallsLabel.getTop());
    hud.addActor(lightsLabel);
    lightingCheckBox = new CheckBox("Lighting", skin);
    lightingCheckBox.setChecked(lighting);
    lightingCheckBox.addListener(new ChangeListener() {

        @Override
        public void changed(ChangeEvent event, Actor actor) {
            lighting = lightingCheckBox.isChecked();
        }
    });
    lightingCheckBox.setPosition(hudWidth - lightingCheckBox.getWidth(), gridCheckBox.getTop());
    hud.addActor(lightingCheckBox);
    lightsCheckBox = new CheckBox("Randomize lights", skin);
    lightsCheckBox.setChecked(false);
    lightsCheckBox.addListener(new ChangeListener() {

        @Override
        public void changed(ChangeEvent event, Actor actor) {
            lightsCheckBox.setChecked(false);
            randomizeLights();
        }
    });
    lightsCheckBox.setPosition(hudWidth - lightsCheckBox.getWidth(), lightingCheckBox.getTop());
    hud.addActor(lightsCheckBox);
    moveCheckBox.remove();
    rotateCheckBox.remove();
}
