@Override
public void init() {
    final ShaderProgram program = this.program;
    this.program = null;
    init(program, renderable);
    renderable = null;
    dirLightsLoc = loc(u_dirLights0color);
    dirLightsColorOffset = loc(u_dirLights0color) - dirLightsLoc;
    dirLightsDirectionOffset = loc(u_dirLights0direction) - dirLightsLoc;
    dirLightsSize = loc(u_dirLights1color) - dirLightsLoc;
    if (dirLightsSize < 0)
        dirLightsSize = 0;
    pointLightsLoc = loc(u_pointLights0color);
    pointLightsColorOffset = loc(u_pointLights0color) - pointLightsLoc;
    pointLightsPositionOffset = loc(u_pointLights0position) - pointLightsLoc;
    pointLightsIntensityOffset = has(u_pointLights0intensity) ? loc(u_pointLights0intensity) - pointLightsLoc : -1;
    pointLightsSize = loc(u_pointLights1color) - pointLightsLoc;
    if (pointLightsSize < 0)
        pointLightsSize = 0;
    spotLightsLoc = loc(u_spotLights0color);
    spotLightsColorOffset = loc(u_spotLights0color) - spotLightsLoc;
    spotLightsPositionOffset = loc(u_spotLights0position) - spotLightsLoc;
    spotLightsDirectionOffset = loc(u_spotLights0direction) - spotLightsLoc;
    spotLightsIntensityOffset = has(u_spotLights0intensity) ? loc(u_spotLights0intensity) - spotLightsLoc : -1;
    spotLightsCutoffAngleOffset = loc(u_spotLights0cutoffAngle) - spotLightsLoc;
    spotLightsExponentOffset = loc(u_spotLights0exponent) - spotLightsLoc;
    spotLightsSize = loc(u_spotLights1color) - spotLightsLoc;
    if (spotLightsSize < 0)
        spotLightsSize = 0;
}
