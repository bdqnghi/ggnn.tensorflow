public void bindDirectionalShadows(final Attributes attributes) {
    final DirectionalLightsAttribute dla = attributes.get(DirectionalLightsAttribute.class, DirectionalLightsAttribute.Type);
    final Array<DirectionalLight> dirs = dla == null ? null : dla.lights;
    if (dirLightsLoc >= 0) {
        for (int i = 0; i < directionalLights.length; i++) {
            if (dirs == null || dirs.size <= i) {
                continue;
            }
            int idx = dirShadowsLoc + i * dirShadowsSize;
            // Shadow
            ObjectMap<DirectionalLight, LightProperties> dirCameras = shadowSystem.getDirectionalCameras();
            DirectionalLight dl = dirs.get(i);
            if (shadowSystem.hasLight(dl)) {
                // UVTransform
                final TextureRegion tr = dirCameras.get(dl).region;
                Camera cam = dirCameras.get(dl).camera;
                if (cam != null) {
                    program.setUniformf(idx + dirShadowsUvTransformOffset, tr.getU(), tr.getV(), tr.getU2() - tr.getU(), tr.getV2() - tr.getV());
                    // ProjViewTrans
                    idx = dirShadowMapProjViewTransLoc + i * dirShadowMapProjViewTransSize;
                    program.setUniformMatrix(idx, dirCameras.get(dl).camera.combined);
                }
            }
            if (dirLightsSize <= 0)
                break;
        }
    }
}
