private void unload() {
    tex1.dispose();
    tex2.dispose();
    font2.dispose();
    // tex3.dispose();
    // atlas.dispose();
    // renderer.dispose();
    manager.unload("data/animation.png");
    // manager.unload("data/pack1.png");
    manager.unload("data/pack");
    // manager.unload("data/verdana39.png");
    manager.unload("data/verdana39.fnt");
    // manager.unload("data/multipagefont.fnt");
    // manager.unload("data/test.etc1");
    // manager.unload("data/tiledmap/tilemap csv.tmx");
    manager.unload("data/i18n/message2");
}
