protected void bindLights(final Renderable renderable, final Attributes attributes) {
    final Environment lights = renderable.environment;
    final DirectionalLightsAttribute dla = attributes.get(DirectionalLightsAttribute.class, DirectionalLightsAttribute.Type);
    final Array<DirectionalLight> dirs = dla == null ? null : dla.lights;
    final PointLightsAttribute pla = attributes.get(PointLightsAttribute.class, PointLightsAttribute.Type);
    final Array<PointLight> points = pla == null ? null : pla.lights;
    final SpotLightsAttribute sla = attributes.get(SpotLightsAttribute.class, SpotLightsAttribute.Type);
    final Array<SpotLight> spots = sla == null ? null : sla.lights;
    if (dirLightsLoc >= 0) {
        for (int i = 0; i < directionalLights.length; i++) {
            if (dirs == null || i >= dirs.size) {
                if (lightsSet && directionalLights[i].color.r == 0f && directionalLights[i].color.g == 0f && directionalLights[i].color.b == 0f)
                    continue;
                directionalLights[i].color.set(0, 0, 0, 1);
            } else if (lightsSet && directionalLights[i].equals(dirs.get(i)))
                continue;
            else
                directionalLights[i].set(dirs.get(i));
            int idx = dirLightsLoc + i * dirLightsSize;
            program.setUniformf(idx + dirLightsColorOffset, directionalLights[i].color.r, directionalLights[i].color.g, directionalLights[i].color.b);
            program.setUniformf(idx + dirLightsDirectionOffset, directionalLights[i].direction.x, directionalLights[i].direction.y, directionalLights[i].direction.z);
            if (dirLightsSize <= 0)
                break;
        }
    }
    if (pointLightsLoc >= 0) {
        for (int i = 0; i < pointLights.length; i++) {
            if (points == null || i >= points.size) {
                if (lightsSet && pointLights[i].intensity == 0f)
                    continue;
                pointLights[i].intensity = 0f;
            } else if (lightsSet && pointLights[i].equals(points.get(i)))
                continue;
            else
                pointLights[i].set(points.get(i));
            int idx = pointLightsLoc + i * pointLightsSize;
            program.setUniformf(idx + pointLightsColorOffset, pointLights[i].color.r * pointLights[i].intensity, pointLights[i].color.g * pointLights[i].intensity, pointLights[i].color.b * pointLights[i].intensity);
            program.setUniformf(idx + pointLightsPositionOffset, pointLights[i].position.x, pointLights[i].position.y, pointLights[i].position.z);
            if (pointLightsIntensityOffset >= 0)
                program.setUniformf(idx + pointLightsIntensityOffset, pointLights[i].intensity);
            if (pointLightsSize <= 0)
                break;
        }
    }
    if (spotLightsLoc >= 0) {
        for (int i = 0; i < spotLights.length; i++) {
            if (spots == null || i >= spots.size) {
                if (lightsSet && spotLights[i].intensity == 0f)
                    continue;
                spotLights[i].intensity = 0f;
            } else if (lightsSet && spotLights[i].equals(spots.get(i)))
                continue;
            else
                spotLights[i].set(spots.get(i));
            int idx = spotLightsLoc + i * spotLightsSize;
            program.setUniformf(idx + spotLightsColorOffset, spotLights[i].color.r * spotLights[i].intensity, spotLights[i].color.g * spotLights[i].intensity, spotLights[i].color.b * spotLights[i].intensity);
            program.setUniformf(idx + spotLightsPositionOffset, spotLights[i].position);
            program.setUniformf(idx + spotLightsDirectionOffset, spotLights[i].direction);
            program.setUniformf(idx + spotLightsCutoffAngleOffset, spotLights[i].cutoffAngle);
            program.setUniformf(idx + spotLightsExponentOffset, spotLights[i].exponent);
            if (spotLightsIntensityOffset >= 0)
                program.setUniformf(idx + spotLightsIntensityOffset, spotLights[i].intensity);
            if (spotLightsSize <= 0)
                break;
        }
    }
    if (attributes.has(ColorAttribute.Fog)) {
        set(u_fogColor, ((ColorAttribute) attributes.get(ColorAttribute.Fog)).color);
    }
    if (lights != null && lights.shadowMap != null) {
        set(u_shadowMapProjViewTrans, lights.shadowMap.getProjViewTrans());
        set(u_shadowTexture, lights.shadowMap.getDepthMap());
        set(u_shadowPCFOffset, 1.f / (2f * lights.shadowMap.getDepthMap().texture.getWidth()));
    }
    lightsSet = true;
}
