#include "MainScene.h"

USING_NS_AX;



bool MainScene::init()
{

    if (!Scene::init())
    {
        return false;
    }

    auto visibleSize = _director->getVisibleSize();
    auto origin = _director->getVisibleOrigin();
    auto safeArea = _director->getSafeAreaRect();
    auto safeOrigin = safeArea.origin;


    tileMap = new ax::FastTMXTiledMap();

    tileMap->initWithTMXFile("tilesets/myOtherTilemap.tmx");    // THIS WORKS, because myOtherTilemap.tmx is the same folder than the tileset myTileset.tsx

    // Comment line above and uncomment the line below to see the error
    //tileMap->initWithTMXFile("tilemaps/myTilemap.tmx");       // THIS ERRORS, because myOtherTilemap.tmx is not in the same folder than the tileset myTileset.tsx

    addChild(tileMap);


    // scheduleUpdate() is required to ensure update(float) is called on every loop
    scheduleUpdate();

    return true;
}




void MainScene::update(float delta)
{
    

}
