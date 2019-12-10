public void bindSpotShadows(final Attributes attributes) {
    final SpotLightsAttribute sla = attributes.get(SpotLightsAttribute.class, SpotLightsAttribute.Type);
    final Array<SpotLight> spots = sla == null ? null : sla.lights;
    if (spotLightsLoc >= 0) {
        for (int i = 0; i < spotLights.length; i++) {
            if (spots == null || spots.size <= i) {
                continue;
            }
            int idx = spotShadowsLoc + i * spotShadowsSize;
            // Shadow
            ObjectMap<SpotLight, LightProperties> spotCameras = shadowSystem.getSpotCameras();
            SpotLight sl = spots.get(i);
            if (shadowSystem.hasLight(sl)) {
                // UVTransform
                final TextureRegion tr = spotCameras.get(sl).region;
                Camera cam = spotCameras.get(sl).camera;
                if (cam != null) {
                    program.setUniformf(idx + spotShadowsUvTransformOffset, tr.getU(), tr.getV(), tr.getU2() - tr.getU(), tr.getV2() - tr.getV());
                    // ProjViewTrans
                    idx = spotShadowMapProjViewTransLoc + i * spotShadowMapProjViewTransSize;
                    program.setUniformMatrix(idx, spotCameras.get(sl).camera.combined);
                }
            }
            if (spotLightsSize <= 0)
                break;
        }
    }
}
