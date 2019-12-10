@Override
public void init() {
    super.init();
    // Directional Shadow
    dirShadowsLoc = loc(u_dirShadows0uvTransform);
    dirShadowsUvTransformOffset = loc(u_dirShadows0uvTransform) - dirShadowsLoc;
    dirShadowsSize = loc(u_dirShadows1uvTransform) - dirShadowsLoc;
    if (dirShadowsSize < 0)
        dirShadowsSize = 0;
    dirShadowMapProjViewTransLoc = loc(u_dirShadowMapProjViewTrans0);
    dirShadowMapProjViewTransSize = loc(u_dirShadowMapProjViewTrans1) - dirShadowMapProjViewTransLoc;
    dirShadowMapUVTransformLoc = loc(u_dirShadowMapUVTransform0);
    dirShadowMapUVTransformSize = loc(u_dirShadowMapUVTransform1) - dirShadowMapUVTransformLoc;
    // Spot Shadow
    spotShadowsLoc = loc(u_spotShadows0uvTransform);
    spotShadowsUvTransformOffset = loc(u_spotShadows0uvTransform) - spotShadowsLoc;
    spotShadowsSize = loc(u_spotShadows1uvTransform) - spotShadowsLoc;
    if (spotShadowsSize < 0)
        spotShadowsSize = 0;
    spotShadowMapProjViewTransLoc = loc(u_spotShadowMapProjViewTrans0);
    spotShadowMapProjViewTransSize = loc(u_spotShadowMapProjViewTrans1) - spotShadowMapProjViewTransLoc;
    spotShadowMapUVTransformLoc = loc(u_spotShadowMapUVTransform0);
    spotShadowMapUVTransformSize = loc(u_spotShadowMapUVTransform1) - spotShadowMapUVTransformLoc;
}
